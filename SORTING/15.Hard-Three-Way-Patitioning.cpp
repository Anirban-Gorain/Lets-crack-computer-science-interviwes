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

// i

// T/C O(n) and Aux space O(1)

void _sort_012(vector <int> & _elem)
{
    int _l = 0, _m = 0, _h = _elem.size()-1;

    while (_m <= _h)
    {
        if(_elem[_m] == 0)
        {
            swap(_elem[_m], _elem[_l]);

            _l++;
            _m++;
        }
        else if(_elem[_m] == 1)
        {
            _m++;
        }
        else
        {
            swap(_elem[_m], _elem[_h]);
            _h--;
        }
    } 
}

// ii

// T/C O(n) and Aux space O(1)

void _sort_Mutiple_Occur_Pivot(vector <int> & _elem, int _pivot)
{
    int _l = 0, _m = 0, _h = _elem.size()-1;

    while(_m <= _h)
    {
        if(_elem[_m] < _pivot)
        {
            swap(_elem[_l], _elem[_m]);

            _l++;
            _m++;
        }
        else if(_elem[_m] == _pivot)
        {
            _m++;
        }
        else
        {
            swap(_elem[_m], _elem[_h]);
            _h--;
        }
    }
}

// iii

// T/C O(n) and Aux space O(1)

void _sort_Pivot_Range(vector <int> & _elem, int _low, int _high)
{
    int _l = 0, _m = 0, _h = _elem.size()-1;

    while(_m <= _h)
    {
        if(_elem[_m] < _low)
        {
            swap(_elem[_l], _elem[_m]);

            _l++;
            _m++;
        }
        else if(_elem[_m] >= _low && _elem[_m] <= _high)
        {
            _m++;
        }
        else
        {
            swap(_elem[_m], _elem[_h]);
            _h--;
        }
    }
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    /* 
        i) Sort an array of 0s, 1s, 2s.
        ii) Three-way partitioning when multiple occurrences of a pivot may exist.
        iii) Partitioning around a range.

    */

    vector <int> _elem = {1, 0, 2, 2, 0, 1, 2, 1};

    _sort_012(_elem);

    for(int _x : _elem)
    {
        cout << _x << "\n";
    }

    cout << "\n\n";

    vector <int> _elem2 = {1, 4, 2, 4, 2, 4, 4, 4, 5, 4, 8, 1, 3, -1, 30, 31, -100};

    _sort_Mutiple_Occur_Pivot(_elem2, 4);

    for(int _x : _elem2)
    {
        cout << _x << "\n";
    }

    cout << "\n\n";

    vector <int> _elem3 = {1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32, 10};

    _sort_Pivot_Range(_elem3, 10, 20);

    for(int _x : _elem3)
    {
        cout << _x << "\n";
    }

    return 0;

}