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

int _stock_Span_Problem(vector<int> _arr)
{
    int _n = _arr.size();
    int _cnt = 0;

    for(int _i = 0; _i < _n; _i++)
    {
        int _temp = 1;
        int _criteria = _arr[_i];
        int _j = _i-1;

        while(_j != -1)
        {
            if(_arr[_j] <= _criteria)
            {
                _temp++;
            }
            else
            {
                break;
            }

            _j--;
        }

        cout << _temp << " ";
        _cnt += _temp;
    }

    return _cnt;
}

// T/C O(2n) and Aux space O(n)

void _print_Span(int _arr[], int _n)
{
    stack<int> _s;

    _s.push(0);

    cout << "1 ";

    for(int _i = 1; _i < _n; _i++)
    {
        while(_s.empty() == false && _arr[_s.top()] <= _arr[_i])
        {
            _s.pop();
        }

        int _span = (_s.empty() == false) ? (_i+1) : (_i-_s.top());

        cout << _span << " "; 
    }
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    vector<int> _arr = {13, 15, 12, 14, 16, 8, 6, 4, 10, 30};

    _stock_Span_Problem(_arr);

    return 0;

}