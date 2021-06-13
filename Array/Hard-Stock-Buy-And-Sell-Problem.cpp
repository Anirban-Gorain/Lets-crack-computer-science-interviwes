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
#define loop(_x, _s ,_n) for(int _x = _s; _x < _n; ++ _x)

void _fio(void)
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}

// T/C ? & S/C ?

int _maximize_The_Profit(int _arr[], int _start, int _end)
{
    if(_start >= _end)
    {
        return 0;
    }

    int _profit = 0;

    for(int _i =_start; _i < _end; _i++)
    {
        for(int _j = _i + 1; _j <= _end; _j++)
        {
           if(_arr[_j] > _arr[_i])
           {
                int _current_Profit = _arr[_j] - _arr[_i] + _maximize_The_Profit(_arr, _j + 1, _end);

                _profit = max(_current_Profit, _profit);
           }
        }
    }

    return _profit;
}

// T/C O(n) & S/C O(1)

class Solution
{
    public:

    int maxProfit(vector<int>& prices)
    {
        int _profit = 0;
        int _l = prices.size();

        loop(_i, 0, _l)
        {
            if(prices[_i] > prices[_i - 1])
            {
                _profit += prices[_i] - prices[_i - 1];
            }
        }

        return _profit;
    }
};

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    int _arr[] = {7,6,4,3,1};

    cout << _maximize_The_Profit(_arr, 0, 4);

    return 0;

}