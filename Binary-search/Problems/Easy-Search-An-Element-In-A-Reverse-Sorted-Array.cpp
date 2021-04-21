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

int _binary_Search_Decending(int *_elements, int _size, int  _key)
{
    int _start, _end, _mid_Point;

    _start = 0;
    _end = _size;

    while (_start <= _end)
    {
        _mid_Point = _start - (_start - _end) / 2;

        if(_elements[_mid_Point] == _key)
        {
            return _mid_Point;
        }
        else if(_key > _elements[_mid_Point])
        {
            _end = _mid_Point - 1;
        }
        else if(_key < _elements[_mid_Point])
        {
            _start = _mid_Point + 1;
        }
    }
    
    return -1;
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    int _elements[] = {10, 9, 8 , 7, 6, 5, 4, 3, 2, 1};
    int _size = sizeof(_elements) / sizeof(int);

    cout << _binary_Search_Decending(_elements, _size, 9);

    return 0;

}