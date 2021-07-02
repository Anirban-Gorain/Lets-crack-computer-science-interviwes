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

// T/C O(n^2) and Aux O(1)

int _max_Odd_Even_Length_Subarray_Naive(int _arr[], int _n)
{
    int _max = INT_MIN;
    int _count;
    int _flag; // Initial =3, Even = 1, Odd = 2

    loop(_i, 0, _n)
    {
        _count = 0;
        _flag = 3;

        loop(_j, _i, _n)
        {
            if(_flag == 3)
            {
                _flag = (_arr[_j] % 2) ? 2 : 1;
                _count++;
            }
            else if(_flag == 1 && _arr[_j] % 2 != 0)
            {
                _flag = 2;
                _count++;
            }
            else if(_flag == 2 && _arr[_j] % 2 == 0)
            {
                _flag = 1;
                _count++;
            }
            else
            {
                break;
            }
        }
        _max = max(_max, _count);
    }

    return _max;
}

// T/CO(n) and Aux O(1)

int _max_Odd_Even_Length_Subarray(int _arr[], int _n)
{
    int _flag = 3;
    int _count = 0;
    int _max = INT_MIN;

    loop(_i, 0, _n)
    {
        if(_flag == 3)
        {
            _flag = (_arr[_i] % 2) ? 2 : 1;
            _count++;
        }
        else if(_flag == 1 && _arr[_i] % 2 != 0)
        {
            _flag = 2;
            _count++;
        }
        else if(_flag == 2 && _arr[_i] % 2 == 0)
        {
            _flag = 1;
            _count++;
        }
        else
        {
            _flag = (_arr[_i] % 2) ? 2 : 1;
            _count = 1;
        }

        _max = max(_max, _count);
    }

    return _max;
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    int _arr[] = {10, 12, 8, 4};
    int _n = sizeof(_arr)/4;

    cout << _max_Odd_Even_Length_Subarray(_arr, _n);

    return 0;
}