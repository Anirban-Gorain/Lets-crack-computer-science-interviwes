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

// Time complexity O(n) and Space complexity is O(1)

int _largest(int _arr[], int _size)
{
    int _max = INT_MIN;

    for(int _ind = 0; _ind < _size; _ind++)
    {
        if(_max < _arr[_ind])
            _max = _arr[_ind];
    }
    return _max;
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
    
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif
    

    int _arr[10] = {1, 2, 3, 100, 5, 6, 7};

    cout << _largest(_arr, 10);

    return 0;

}