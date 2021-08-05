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

// T/C O(n^2) and Aux space O(n)

void _selection_Sort_I1(int *_arr, int _n)
{
    int _temp[_n];

    for(int _i = 0; _i < _n; _i++)
    {
        int _min_Elem = 0;

        for(int _j = 1; _j < _n; _j++)
        {
            if(_arr[_j] < _arr[_min_Elem])
                _min_Elem = _j;
        }

        _temp[_i] = _arr[_min_Elem];
        _arr[_min_Elem] = INT_MAX;
    }

    for(int _i = 0; _i < _n; _i++)
        _arr[_i] = _temp[_i];
}

// T/C O(n^2) and Aux space O(1)

void _selection_Sort(int _arr[], int _n)
{
    for(int _i = 0; _i < _n-1; _i++)
    {
        int _min_Elem = _i;

        for(int _j = _i+1; _j < _n; _j++)
        {
            if(_arr[_j] < _arr[_min_Elem])
                _min_Elem = _j;
        }

        swap(_arr[_min_Elem], _arr[_i]);
    }
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    int _arr[] = {9, 8, 7};

    _selection_Sort(_arr, 3);
    cout << endl;

    for(int _i = 0; _i < 3; _i++)
        cout << _arr[_i] << " ";

    return 0;

}