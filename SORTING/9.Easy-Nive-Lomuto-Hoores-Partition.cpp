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
#define deb(_x) cout << #_x << " = " << _x << endl;
#define loop(_x, _s ,_n) for(int _x = _s; _x < _n; ++ _x)

void _fio(void)
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}

// Naive, Stable solution, Non in-place

// T/C O(4n) and Aux space O(n)

void _partion(int _arr[], int _l, int _h, int _p)
{

    int _temp[_h-_l+1];

    int _index = 0;

    for(int _i = 0; _i < _h; _i++)
    {
        if(_arr[_i] < _arr[_p])
        {
            _temp[_index++] = _arr[_i];
        }
    }

    for(int _i = 0; _i < _h; _i++)
    {
        if(_arr[_i] == _arr[_p])
        {
            _temp[_index++] = _arr[_i];
        }
    }

    for(int _i = 0; _i < _h; _i++)
    {
        if(_arr[_p] < _arr[_i])
        {
            _temp[_index++] = _arr[_i];
        }
    }

    for(int _i = 0; _i < _h; _i++)
    {
        _arr[_i] = _temp[_i];
    }
}

// Lomuto partition, Not stable, Inplace

// T/C O(n) and Aux space O(1)

int _lomuto(int _arr[], int _l, int _h)
{
    // If pivot _p is given then add this line, swap(_arr[_p], _arr[_h-1]);

    int _i = _l-1;
    int _pivot = _arr[_h-1];
    
    for(int _j = _l; _j <= _h-1; _j++)
    {
        if(_arr[_j] < _pivot)
        {
            _i++;
            swap(_arr[_i], _arr[_j]);
        }
    }

    _i++;
    swap(_arr[_i], _arr[_h-1]);

    return _i;
}

// Hoores partition, Inplace

int _hoores_Partition(int _arr[], int _l, int _h)
{
    // We can take a give pivot by swapping the first element and given pivot.

    int _i, _j, _pivot;

    _i = _l-1;
    _j = _h; // _h should be the size of the array.
    _pivot = _arr[_l];

    while (true)
    {
        do
        {
            _i++;

        } while (_arr[_i] < _pivot);
        
        do
        {
            _j--;

        } while (_arr[_j] > _pivot);
        
        if(_i >= _j) return _j;

        swap(_arr[_i], _arr[_j]);
    }
    
    return _j;
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    // What's here

    /* 
    
        a1, a2, ... < p <= b1, b2, ...

    */

    return 0;

}