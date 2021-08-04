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

int _lamuto(int _arr[], int _l, int _h)
{
    int _pivot = _arr[_h];
    int _i = _l-1;

    for(int _j = _l; _j <= _h-1; _j++)
    {
        if(_arr[_j] < _pivot)
        {
            _i++;
            swap(_arr[_j], _arr[_i]);
        }
    }

    _i++;
    swap(_arr[_i], _arr[_h]);

    return _i;
}

void _quick_Sort(int _arr[], int _l, int _h)
{
    if(_l < _h)
    {
        int _pivot = _lamuto(_arr, _l, _h);

        _quick_Sort(_arr, _l, _pivot-1);
        _quick_Sort(_arr, _pivot+1, _h);
    }
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    int _arr[] = {5,4,3,2,1,10,9,8,7,6};

    _quick_Sort(_arr, 0, 9);

    for(int _x : _arr)
    {
        cout << _x << " ";
    }

    return 0;

}