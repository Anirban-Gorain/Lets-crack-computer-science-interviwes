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

int _find_Element(int *_arr, int _n, int _key)
{
    if(_n == 0)
    {
        return -1;
    }

    int _pre, _nxt, _mid, _start, _end;

    _start = 0;
    _end = _n-1;

    while (_start <= _end)
    {
        _mid = _start - (_start - _end) / 2;
        _pre = (_mid + _n - 1) % _n;
        _nxt = (_mid + 1) % _n;

        if(_arr[_mid] == _key)
        {
            return _mid;
        }
        else if(_arr[_pre] == _key)
        {
            return _pre;
        }
        else if(_arr[_nxt] == _key)
        {
            return _nxt;
        }
        else if(_key < _arr[_pre])
        {
            _end = _pre - 1;
        }
        else if(_key > _arr[_nxt])
        {
            _start = _nxt + 1;
        }
    }
    
    cout << _start << " " << _end;
    return -1;
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    int _elements[] = {1,2,4,3};
    int _n = sizeof(_elements) / 4;
    cout << _find_Element(_elements, _n, -1);

    return 0;

}