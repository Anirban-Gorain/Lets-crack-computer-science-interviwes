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
#define ONLINE_JUDGE -1
#define deb(_x) cout << #_x << " = " << _x << endl;
#define loop(_x, _s ,_n, _m) for(int _x = _s; _x < _n; _m _x)

void _fio(void)
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}

// T/C O(n^2) and S/C O(1)

int _check_Leader(int _arr[], int _size)
{
    
}

// T/C O(n) & S/C if(left left to right) ? O(n)  : O(1)

void _check_Leader_(int _arr[], int _size)
{
    int _lft_Mst = _arr[_size - 1];
    cout << _lft_Mst << " ";

    for(int _i = _size - 1; _i >= 0; _i--)
    {
        if(_arr[_i] > _lft_Mst)
        {
            _lft_Mst = _arr[_i];
            cout << _arr[_i] << " ";
        }
    }

    /* 
        We can keep the elements in an array the by reversing that array, Can be printed in the original order.
    */  
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    int _arr[] = {7, 10, 4, 10, 6, 5, 2};

    _check_Leader_(_arr, 7);

    return 0;

}