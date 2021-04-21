#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define f                  first
#define s                  second
#define ll                 long long
#define pub                .push_back()
#define pob                .push_back()
#define mp                 make_pair
#define p(x, y)            pair<x, y>
#define v(x)               vector<x>
#define m(x, y)            map<x, y>
#define pq(x)              priority_queue<x>
#define setbits(x)         __builtin_popcountll(x)
#define zrobits(x)         __builtin_ctzll(x)
#define sp(x, y)           fixed<<setprecision(y)<<x
#define dma(arr,n,type)    type *arr=new type[n];
#define w(x)               int x; while(x--)
#define sq(x)              x*x
#define its(x)             (string) #x
#define sti(x)             (int) x
#define fti(x)             (int) x
#define ONLINE_JUDGE       -1
#define deb(x)             cout << #x << " = " << x << endl;

void _fio(void)
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}

int _absolute_Min_Difference(int _arr[], int _size , int _key)
{
    int _start, _end, _mid, _ans, _cal;

    _start = 0;
    _end = _size - 1;
    _ans = INT_MAX;

    while(_start <= _end)
    {
        _mid = _start - (_start - _end) / 2;

        if(_arr[_mid] == _key)
        {
            return 0;
        }
        else if(_arr[_mid] < _key)
        {
            _cal = _arr[_mid] - _key;

            if(_cal < 0)
            {
                _cal = _cal * -1;
            }

            if(_ans > _cal)
            {
                _ans = _cal;
            }

            _start = _mid + 1;
        }
        else if(_arr[_mid] > _key)
        {
            _cal = _arr[_mid] - _key;

            if(_cal < 0)
            {
                _cal = _cal * -1;
            }

            if(_ans > _cal)
            {
                _ans = _cal;
            }

            _end = _mid - 1;
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

    int _arr[] = {1,2,3,10};
    int _key = 7;

    cout << _absolute_Min_Difference(_arr, 4, _key);

    return 0;

}