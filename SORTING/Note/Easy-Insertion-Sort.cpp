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

// T/C in best case O(n) and in worst case O(n^2) and Aux space O(1)

void _insertion_Sort(int _arr[], int _n)
{
    for(int _i = 1; _i < _n; _i++)
    {
        if(_arr[_i] < _arr[_i-1])
        {
            int _j = _i-1;
            int _tem = _arr[_i];

            while (_j >= 0 && _arr[_j] > _tem)
            {
                _arr[_j+1] = _arr[_j];
                _j--;
            }

            _arr[_j+1] = _tem;
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

    int _arr[] = {5, 4, 3, 2, 1};
    int _n = sizeof(_arr)/4;

    _insertion_Sort(_arr, 5);

    for(int _i = 0; _i < _n; _i++)
    {
        cout << _arr[_i] << " ";
    }

    return 0;

}