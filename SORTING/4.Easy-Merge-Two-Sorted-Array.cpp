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

// T/C O((m+n) * log(m+n)) and Aux space O(m+n)

void _merge_1(int _arr1[], int _arr2[], int _m, int _n)
{
    int _res[_m+_n];
    int _k = 0;

    loop(_i, 0, _m)
    {
        _res[_k] = _arr1[_i];
        _k++;
    }

     loop(_i, 0, _n)
    {
        _res[_k] = _arr2[_i];
        _k++;
    }

    sort(_res, _res+_m+_n);

    loop(_i, 0, _m+_n)
    {
        cout << _res[_i] << "\n";
    }
}

// T/C O((m+n)) and Aux space O(m+n)

void _merge_2(int _arr1[], int _arr2[], int _m, int _n)
{
    int _i, _j, _k, _res[_m+_n];

    _i=_j=_k=0;

    while(_i<_m && _j<_n)
    {
        if(_arr1[_i] < _arr2[_j])
        {
            _res[_k]=_arr1[_i];
            _i++;
        }
        else if(_arr1[_i] > _arr2[_j])
        {
            _res[_k]=_arr2[_j];
            _j++;
        }
        else
        {
            _res[_k]=_arr1[_j];
            _res[_k+1]=_arr1[_j];
            _i++;
            _j++;
        }

        _k++;
    }

    while(_i<_m)
    {
        _res[_k]=_arr1[_i];
        _i++;
        _k++;
    }

    while(_j<_n)
    {
        _res[_k]=_arr2[_j];
        _j++;
        _k++;
    }

    loop(_i, 0, _m+_n)
    {
        cout << _res[_i] << "\n";
    }
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    int _arr1[] = {1, 6, 9, 11, 20, 30, 35};
    int _arr2[] = {4, 5, 7, 8, 14, 15, 15, 16};

    _merge_2(_arr1, _arr2, 7, 8);

    return 0;

}