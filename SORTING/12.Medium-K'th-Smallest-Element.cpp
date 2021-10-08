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

// T/C O(n(log(n))) & S/C O(1);

int _kth_Smallest_Naive(int arr[], int l, int r, int k)
{
        sort(arr, arr+r);

        return arr[k-1];
}

// T/C O(nk) & S/C O(1); Naive than above because, k-> n the T/C will be O(n^2).

int _kth_Smallest_Naive_More(int arr[], int l, int r, int k)
{
    int _res = INT_MIN;

    while(k--)
    {
        int _criteria  = _res;
        _res = INT_MAX;

        for(int _i = 0; _i < r; _i++)
        {
            if(arr[_i] > _criteria)
            {
                _res = min(arr[_i], _res);
            }
        }
    }

    return _res;
}

// T/C O() and Aux space O()   

int _lomuto(int _arr[], int _l, int _h)
{
    int _pivot = _arr[_h];
    int _smaller_Bound = _l - 1;

    for(int _j = _l; _j <= _h-1; _j++)
    {
        if(_arr[_j] < _pivot)
        {
            _smaller_Bound++;

            swap(_arr[_smaller_Bound], _arr[_j]);
        }
    }

    swap(_arr[_smaller_Bound + 1], _arr[_h]);

    return _smaller_Bound + 1;
}

int _kth_Smallest(int arr[], int l, int r, int k)
{
    while(l <= r)
    {
        int _p = _lomuto(arr, l, r);

        if(_p == k-1)
        {
            return arr[_p];
        }
        else if(_p > k-1)
        {
            r = _p-1;
        }
        else
        {
            l = _p+1;
        }
    }

    return -1;
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    int _arr[] = {1, 9, 7, 5, 6, 22}; // 1 5 6 7 9 22

    cout << _kth_Smallest(_arr, 0, 5, 4); // k <= n

    return 0;

}