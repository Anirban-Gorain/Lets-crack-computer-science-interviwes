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

// T/C O(n) and Aux space O(common(n)) + O(dintinct(n))

vector<int> _intersection(vector<int> _arr1, vector<int> _arr2)
{
    unordered_set<int>  _distinct_Avatar(_arr1.begin(), _arr1.end());
    vector<int> _res;

    for(int _i = 0; _i < _arr2.size(); _i++)
    {
        if(_distinct_Avatar.find(_arr2[_i]) != _distinct_Avatar.end())
        {
            _res.push_back(_arr1[_i]);
        }
    }

    return _res;
}

// T/C O(n * m) and Aux space O(1)

vector<int> _intersection_2(vector<int> _arr1, vector<int> _arr2)
{
    vector<int> _res;

    for(int _i = 1; _i < _arr1.size(); _i++)
    {
        if((_i != _arr1.size() - 1) && _arr1[_i] == _arr1[_i-1])
            continue;

        for(int _j = 0; _j < _arr2.size(); _j++)
        {
            if(_arr2[_j] == _arr1[_i-1])
            {
                _res.push_back(_arr1[_i-1]);
                break;
            }
        }
    }

    return _res;
}

// T/C O(m+n) and Aux space O(n)

vector<int> _intersection_3(vector<int> _arr1, vector<int> _arr2)
{
    vector<int> _res;
    int _i, _j, _m, _n;
    _m = _arr1.size(); _n = _arr2.size();
    _i = _j = 0;

    while (_i < _m && _j < _n)
    {
        if(_i > 0 && _arr1[_i] == _arr1[_i-1])
        {
            _i++;
            continue;
        }
        if(_j > 0 && _arr1[_j] == _arr1[_j-1])
        {
            _i++;
            continue;
        }

        if(_arr1[_i] == _arr2[_j])
        {
            _res.push_back(_arr1[_i]);
            _i++;
            _j++;
        }
        else if(_arr1[_i] > _arr2[_j])
        {
            _j++;
        }
        else if(_arr1[_i] < _arr2[_j])
        {
            _i++;
        }
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

    vector<int> _arr1 = {1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4};
    vector<int> _arr2 = {1, 1, 2, 3, 4};

    vector<int> _res = _intersection_2(_arr1, _arr2);

    for(int _i = 0; _i < _res.size(); _i++)
    {
        cout << _res[_i] << endl;
    }

    return 0;

}