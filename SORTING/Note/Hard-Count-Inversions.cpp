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

// T/C O(n^2) and Aux space O(1)

int _count_Inversions(int _arr[], int _n)
{
    int _cnt = 0;

    for(int _i = 0; _i < _n-1; _i++)
    {
        for(int _j = _i+1; _j < _n; _j++)
        {
            if(_arr[_i] > _arr[_j])
                _cnt++;
        }
    }

    return _cnt;
}

// T/C O() and Aux space O()

int _merge(int _arr[], int _mid, int _l, int _r)
{
    int _ls = _mid - _l + 1;
    int _rs = _r - _mid;

    int _left[_ls];
    int _right[_rs];

    int _i = 0;

    while (_i < _ls)
    {
        _left[_i] = _arr[_l+_i];
        _i++;
    }

    _i = 0;

    while (_i < _rs)
    {
        _right[_i] = _arr[_mid+1+_i];
        _i++;
    }

    int _j, _res, _k;
    _j =0; _i = 0; _res = 0;
    _k = _l;

    while(_i < _ls && _j < _rs)
    {
        if(_left[_i] > _right[_j])
        {
            _arr[_k] = _right[_j];
            _res += (_ls - _i);
            _j++;
        }
        else if(_left[_i] <= _right[_j])
        {
            _arr[_k] = _left[_i];
            _i++;
        }
        

        _k++;
    }

    while(_i < _ls)
    {
        _arr[_k] = _left[_i];
        _i++;
        _k++;
    }

    while(_j < _rs)
    {
        _arr[_k] = _right[_j];
        _j++;
        _k++;
    }

    return _res;
}

// T/C O(nlog(n)) and Aux space O(log(n))

int _count_Inversions_2(int _arr[], int _l, int _r)
{

    int _res = 0;

    if(_l < _r)
    {
        int _mid = _l + (_r - _l)/2;

        _res += _count_Inversions_2(_arr, _l, _mid);
        _res += _count_Inversions_2(_arr, _mid+1, _r);
        _res += _merge(_arr, _mid, _l, _r);
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

    int _arr[] = {10, 9, 11, 8, 7, 13};
    cout << _count_Inversions_2(_arr, 0, 5);



    return 0;

}