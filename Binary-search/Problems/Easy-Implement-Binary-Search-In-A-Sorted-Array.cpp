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

int _iterative_Binary_Search(int *_elements, int _size, int _key)
{
    int _start, _end, _mid_Point;
    
    _start = 0;
    _end = _size - 1;

    while (_start <= _end)
    {
        _mid_Point = _start - (_start - _end) / 2;

        if(_elements[_mid_Point] == _key)
        {
            return _mid_Point;
        }
        else if(_key > _elements[_mid_Point])
        {
            _start = _mid_Point + 1;
        }
        else if(_key < _elements[_mid_Point])
        {
            _end = _mid_Point - 1;
        }
    }
    
    return -1;
}

int _recursive_Binary_Search(int *_elements, int _key, int _start, int _end)
{
    if(_start > _end)
    {
        return -1;
    }

    int _mid = _start - (_start - _end) / 2;

    if(_elements[_mid] == _key)
    {
        return _mid;
    }
    else if(_key > _elements[_mid])
    {
        _start = _mid + 1;
        _recursive_Binary_Search(_elements,_key, _start, _end);

    }
    else if(_key < _elements[_mid])
    {
        _end = _mid - 1;
        _recursive_Binary_Search(_elements,_key, _start, _end);
    }
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    int _elements[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int _size = sizeof(_elements) / sizeof(int);

    cout << _recursive_Binary_Search(_elements, -9, 0, 10);

    return 0;

}