#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define f first
#define s second
#define ll long long
#define pub .push_back()
#define pob .push_back()
#define mp make_pair
#define p(_x, _y) pair<_x, _y>
#define v(_x) vector<_x>
#define m(_x, _y) map<_x, __y>
#define pq(_x) priorit_y_queue<_x>
#define setbits(_x) __builtin_popcountll(_x)
#define zrobits(_x) __builtin_ctzll(_x)
#define sp(_x, _y) fi_xed<<setprecision(_y)<<_x
#define dma(arr,n,t_ype) t_ype *arr=new t_ype[n];
#define w(_x) int _x; while(_x--)
#define sq(_x) _x*_x
#define its(_x) (string) #_x
#define sti(_x) (int) _x
#define fti(_x) (int) _x
#define ONLINE_JUDGE -1
#define deb(_x) cout << #_x << " = " << _x << endl;
#define loop(_x, _s ,_n) for(int _x = _s; _x < _n; ++ _x)

void _fio(void)
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}

// T/C O(dn) & S/C O(1)

void _left_Rotation(int _arr[], int _size)
{
    // Run thins fun for d times

    int _temp = _arr[0];

    for(int _i = 0; _i < (_size - 1); _i++)
    {
        _arr[_i] = _arr[_i + 1];
    }

    _arr[_size - 1] = _temp;
}

// T/C O(_d + _n - _d + _d) => O(_n + _d) & S/C (d)

void _left_Rotation_(int _arr[], int _size, int _d)
{
    int _temp[_d];

    // Taking cop_y of first _d elem.

    loop(_i, 0, _d)
    {
        _temp[_i] = _arr[_i];
    }

    // After first _d elements, Shifting remaining (_size - _d) elemnts towards left.

    loop(_i, _d, _size)
    {
        _arr[_i - _d] = _arr[_i];
    }

    // putting _temp _elements

    int _temp_I = 0;

    loop(_i, (_size - _d), _size)
    {
        _arr[_i] = _temp[_temp_I];
        _temp_I++;
    }
}

// T/C O(_d + _n - _d + _n) => O(2_n) => O(_n) and S/C O(1)

void _left_Rotation__(int _arr[], int _size, int _d)
{
    /* 
        Algo.

        1) Reverse first _d places.
        2) Reverse after _d (n - _d) places.
        3) Reverse whole array.
    */

   reverse(_arr, _arr + (_d));
   reverse(_arr + _d, _arr + (_size));
   reverse(_arr, _arr + _size);
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    int _arr[] = {1, 2, 3, 4, 5};
    int _d = 2;

    _left_Rotation__(_arr, 5, _d);

    loop(_i, 0, 5)
    {
        cout << _arr[_i] << " ";
    }

    return 0;

}