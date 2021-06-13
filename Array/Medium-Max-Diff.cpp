#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define f first
#define s second
#define ll long long
#define pub .push_back()
#define pob .push_back()
#define mp make_pair
#define p(_x, y) pair<_x, y>
#define v(_x) vector<_x>
#define m(_x, y) map<_x, y>
#define pq(_x) priority_queue<_x>
#define setbits(_x) __builtin_popcountll(_x)
#define zrobits(_x) __builtin_ctzll(_x)
#define sp(_x, y) fi_xed<<setprecision(y)<<_x
#define dma(arr,n,type) type *arr=new type[n];
#define w(_x) int _x; while(_x--)
#define sq(_x) _x*_x
#define its(_x) (string) #_x
#define sti(_x) (int) _x
#define fti(_x) (int) _x
#define ONLINE_JUDGE -1
#define deb(_x) cout << #_x << " = " << _x << endl;
#define loop(_x, _s ,_n) for(int _x = _s; _x < _n; ++ _x)

void _fio(void)
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}

// Time complexity O(n^2) and Space complexity O(1).

int _max_Diff(int _arr, int _n)
{
    /*
    
        for(_i = 0 to _n)
        {
            for(_j = _i + 1 to _j)
            {
                _res = _max(_res, _arr[_i] - _arr [6)]);
            }
        }
    
     */
}

// T/C O(n) and S/C O(1).

int _max_Diff_(int _arr[], int _n)
{
    int _res = _arr[1] - _arr[0];

    int _min = _arr[0];

    for(int _j = 0; _j < _n ; _j++)
    {
        _res = max(_res, _arr[_j] - _min);
        _min = min(_min, _arr[_j]);
    }

    return _res;
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    int _arr[] = {2, 3, 10, 6, 4, 8, 1};

    cout << _max_Diff_(_arr, 7);

    return 0;

}