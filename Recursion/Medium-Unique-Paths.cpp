#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define f first
#define s second
#define ll long long
#define pub .push_back()
#define pob .push_back()
#define mp make_pair
#define p(x, y) pair<x, y>
#define v(x) vector<x>
#define m(x, y) map<x, y>
#define pq(x) priority_queue<x>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define sp(x, y) fixed<<setprecision(y)<<x
#define dma(arr,n,type) type *arr=new type[n];
#define w(x) int x; while(x--)
#define sq(x) x*x
#define its(x) (string) #x
#define sti(x) (int) x
#define fti(x) (int) x
#define ONLINE_JUDGE -1
#define deb(x) cout << #x << " = " << x << endl;

void _fio(void)
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}

class Solution
{
    public:

    int uniquePaths(int m, int n)
    {
        return _solve(0, 0, m - 1, n - 1, m, n);
    }

    int _solve(int _sr, int _sc, int _dr, int _dc, int m, int n)
    {
        if(_sr == _dr && _sc == _dc)
        {
            return 1;
        }

        int _total_Way = 0;

        // Horizontal movement

        if(_sr + 1 < m)
            _total_Way += _solve(_sr + 1, _sc, _dr, _dc, m, n);

        // Vertical movement

        if(_sc + 1 < n)
            _total_Way += _solve(_sr, _sc + 1, _dr, _dc, m, n);

        return _total_Way;
    }
};

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    Solution _test;
    cout <<_test.uniquePaths(3, 3);

    return 0;

}