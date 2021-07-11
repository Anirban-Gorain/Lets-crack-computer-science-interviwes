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

// T/C O(2n) & Aux space O(1)

int _min_Flips(int _arr[], int n)
{
    // Finding no of one's groups

    int _ones_Group = 0;
    int _is_zero = 1;

    for(int _i = 0; _i < n; _i++)
    {
        if(_arr[_i] == 1 && _is_zero == 1)
        {
            _ones_Group++;
            _is_zero = 0;
        }
        else if(_arr[_i] == 0)
        {
            _is_zero = 1;
        }
    }

    // Finding no of zero's groups

    int _zeros_Group = 0;
    int _is_one = 1;

    for(int _i = 0; _i < n; _i++)
    {
        if(_arr[_i] == 0 && _is_one == 1)
        {
            _zeros_Group++;
            _is_one = 0;
        }
        else if(_arr[_i] == 1)
        {
            _is_one = 1;
        }
    }

    cout << _ones_Group  << " " << _zeros_Group << " \n";

    return min(_ones_Group, _zeros_Group);
}

// T/C O(n) & Aux space O(1)

int _min_Flips_2(int _arr[], int _n)
{

    int _count = 1;
    int _starts = _arr[0];

    for(int _i = 1; _i < _n; _i++)
    {
        if((_arr[_i] != _arr[_i-1]) && _arr[_i] != _starts)
        {
            _count++;
        }
    }

    if(_arr[0] == _arr[_n-1])
    {
        if(_count == 1)
        {
            return 1;
        }
        else
            return --_count;
    }
    else
    {
        return --_count;
    }
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    int _elem[] = {1,0,1,0};

    cout << _min_Flips_2(_elem, sizeof(_elem)/4);

    return 0;

}