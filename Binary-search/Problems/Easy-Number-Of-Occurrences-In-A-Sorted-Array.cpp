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

// Time complexity O(n) and space complexity O(2).

int find(int arr[], int n , int x )
{
    int _start, _end, _mid, _left_Most, _right_Most;

    _start = 0;
    _end = n;
    _right_Most = _left_Most = -1;

    // Finding the first occurrance.

    while (_start <= _end)
    {
        _mid = _start - (_start-_end) / 2;

        if(arr[_mid] == x)
        {
            _right_Most = _mid;
            _end = _mid - 1;
        }
        else if(x > arr[_mid])
        {
            _start = _mid + 1;
        }
        else if(x < arr[_mid])
        {
            _end = _mid - 1;
        }
    }

    // Finding the last occurrance.

    _start = 0;
    _end = n;

    while (_start <= _end)
    {
        _mid = _start - (_start-_end) / 2;

        if(arr[_mid] == x)
        {
            _left_Most = _mid;
            _start = _mid + 1;
        }
        else if(x > arr[_mid])
        {
            _start = _mid + 1;
        }
        else if(x < arr[_mid])
        {
            _end = _mid - 1;
        }
    }
    
    if(_left_Most == -1 && _right_Most == -1)
    {
        return 0;
    }
    
    return _left_Most - _right_Most + 1;
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    int _elements[] = {1, 1, 2, 3};

    int _result = find(_elements, 4, 2);
    cout << _result;

    return 0;

}