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

int _ceil(int arr[], int _n, int x)
{
    int _mid, _start, _end, _ans;
    
    _start = 0;
    _end = _n-1;
    _ans = - 1;

    while (_start <= _end)
    {
        _mid = _start - (_start - _end) / 2;

        if(arr[_mid] == x)
        {
            return _mid;
        }
        else if(x < arr[_mid])
        {
            _ans = arr[_mid];
            _end = _mid - 1;
        }
        else if(x > arr[_mid])
        {
            _start = _mid + 1;
        }
    }
    
    return _ans;
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    int _arr[] = {1, 2, 8, 10, 12, 19};
    int _size = sizeof(_arr)/4;
    
    cout << _ceil(_arr, _size, 20);

    return 0;

}