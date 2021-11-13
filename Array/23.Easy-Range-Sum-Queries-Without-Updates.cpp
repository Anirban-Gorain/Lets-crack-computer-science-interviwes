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

// T/C O(n) and Aux space O(1).

int _get_Sum(int _arr[], int _n, int _l, int _r)
{
    int _sum = 0;

    _l--;
    _r;

    loop(_i, _l, _r)
    {
        _sum += _arr[_i];
    }

    return _sum;
}

// T/C O(n) and Aux space O(distinct(n)).

int _get_Sum_2(int _arr[], int _n, int _l, int _r)
{
    // This sol will be consider as a good sol when will be given multiple queries on.

    unordered_map <int, int> _pre_Sum; // <index, prefix sum>

    int _sum = 0;

    loop(_i, 0, _n)
    {
        _sum += _arr[_i];

        _pre_Sum.insert({_i, _sum});
    }

    return (_pre_Sum[_r - 1] - _pre_Sum[_l - 2]);
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    int _arr[] = {1, 2, 3, 4, 5, 6, 6, 7, 8, 9, 10};

    cout << _get_Sum_2(_arr, sizeof(_arr)/4, 2, 5);

    return 0;

}