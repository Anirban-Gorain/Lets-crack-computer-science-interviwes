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

// T/C O(m+n) and Aux space O(2n)

vector<int> _union(int _arr1[], int _arr2[], int _x, int _y)
{
    int _i, _j, _m, _n;
    _m = _x; _n = _y;
    _i = _j = 0;
    v(int) _res;
    unordered_set<int> _res_Non_Sorted; // In order to handle duplicate/ If required output not needed in sorted order then we can print it.

    while(_i < _m && _j < _n)
    {
        if(_res_Non_Sorted.find(_arr1[_i]) != _res_Non_Sorted.end())
        {
            _i++;
            continue;
        }

        if(_res_Non_Sorted.find(_arr2[_j]) != _res_Non_Sorted.end())
        {
            _j++;
            continue;
        }

        if(_arr1[_i] == _arr2[_j])
        {
            _res.push_back(_arr1[_i]);

            _res_Non_Sorted.insert(_arr1[_i]);

            _i++; _j++;
        }
        else if(_arr1[_i] > _arr2[_j])
        {
            _res.push_back(_arr2[_j]);

            _res_Non_Sorted.insert(_arr2[_j]);

            _j++;
        }
        else if(_arr1[_i] < _arr2[_j])
        {
            _res.push_back(_arr1[_i]);

            _res_Non_Sorted.insert(_arr1[_i]);

            _i++;
        }
    }

    while (_i < _m)
    {
        if(_i > 0 && _arr1[_i] == _arr1[_i - 1])
        {
            _i++;
            continue;
        }

        _res.push_back(_arr1[_i]);
        _i++;
    }

    while (_j < _n)
    {
        if(_j > 0 && _arr2[_j] == _arr2[_j - 1])
        {
            _j++;
            continue;
        }

        _res.push_back(_arr2[_j]);
        _j++;
    }
    
    return _res;
}

// T/C O(m+n) and Aux space O(n)

vector<int> _union1(int _arr1[], int _arr2[], int _x, int _y)
{ 
    int _i, _j, _m, _n;
    _m = _x; _n = _y;
    _i = _j = 0;
    v(int) _res;

    while(_i < _m && _j < _n)
    {
        if(_i > 0 && _arr1[_i] == _arr1[_i-1])
        {
            _i++;
            continue;
        }

        if(_j > 0 && _arr2[_j] == _arr2[_j-1])
        {
            _j++;
            continue;
        }

        if(_arr1[_i] == _arr2[_j])
        {
            _res.push_back(_arr1[_i]);

            _i++; _j++;
        }
        else if(_arr1[_i] > _arr2[_j])
        {
            _res.push_back(_arr2[_j]);

            _j++;
        }
        else if(_arr1[_i] < _arr2[_j])
        {
            _res.push_back(_arr1[_i]);

            _i++;
        }
    }

    while (_i < _m)
    {
        if(_i > 0 && _arr1[_i] == _arr1[_i - 1])
        {
            _i++;
            continue;
        }

        _res.push_back(_arr1[_i]);
        _i++;
    }

    while (_j < _n)
    {
        if(_j > 0 && _arr2[_j] == _arr2[_j - 1])
        {
            _j++;
            continue;
        }

        _res.push_back(_arr2[_j]);
        _j++;
    }
    
    return _res;
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    int _arr1[] = {1, 2, 2, 3, 4, 8, 8, 9};
    int _arr2[] = {2, 2, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    vector<int> _res = _union1(_arr1, _arr2, 8, 16);

    for(int _i = 0; _i < _res.size(); _i++)
    {
        cout << _res[_i] << endl;
    }

    return 0;

}