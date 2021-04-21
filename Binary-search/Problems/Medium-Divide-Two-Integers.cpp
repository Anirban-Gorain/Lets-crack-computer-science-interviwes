#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define f                  first
#define s                  second
#define ll                 long long
#define pub                .push_back()
#define pob                .push_back()
#define mp                 make_pair
#define p(x, y)            pair<x, y>
#define v(x)               vector<x>
#define m(x, y)            map<x, y>
#define pq(x)              priority_queue<x>
#define setbits(x)         __builtin_popcountll(x)
#define zrobits(x)         __builtin_ctzll(x)
#define sp(x, y)           fixed<<setprecision(y)<<x
#define dma(arr,n,type)    type *arr=new type[n];
#define w(x)               int x; while(x--)
#define sq(x)              x*x
#define its(x)             (string) #x
#define sti(x)             (int) x
#define fti(x)             (int) x
#define ONLINE_JUDGE       -1
#define deb(x)             cout << #x << " = " << x << endl;

void _fio(void)
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}

class Solution
{
    public:

    // Time complexity is O(quotient).

    int divide_TLE(int dividend, int divisor)
    {
       long long _ans = 0, _is_Negative, _dividend_Update, _divisor_Update;

        _is_Negative = 0;

        if((dividend < 0 && divisor > 0) || (divisor < 0 && dividend > 0))
        {
            _is_Negative = 1;
        }

        _dividend_Update = abs((long long)dividend);
        _divisor_Update = abs(divisor);

        while (_dividend_Update >= _divisor_Update)
        {
            _ans++;

            _dividend_Update = _dividend_Update - _divisor_Update;
        }
        
        if(_is_Negative == 1)
        {
            _ans = ~_ans + 1;
        }

        cout << _ans << endl;

        return (_ans < INT_MIN || _ans > INT_MAX) ? INT_MAX : _ans;
    }

    // Time complexity O(log(quotient))

    int divide(int dividend, int divisor)
    {
        long long _ans = 0, _is_Negative, _dividend_Update, _divisor_Update, _quotient, _temp;

        _is_Negative = 1;

        if((dividend < 0 && divisor > 0) || (divisor < 0 && dividend > 0))
        {
            _is_Negative = -1;
        }

        _dividend_Update = abs((long long)dividend);
        _divisor_Update = abs((long long)divisor);
        _quotient = 0;
        _temp = 0;

        for(int _place_Value = 31; _place_Value != -1; _place_Value--)
        {
            if(_temp + (_divisor_Update << _place_Value) <= _dividend_Update)
            {
                _temp += _divisor_Update << _place_Value;
                _quotient = _quotient | ((long long)1 << _place_Value);
            }
        }

        if(_is_Negative < 0)
        {
            _quotient = -_quotient;
        }

        return (_quotient > INT_MAX || _quotient < INT_MIN) ? INT_MAX : _quotient;
    }
};

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    Solution _test;

    cout << _test.divide(-5, -5);

    return 0;

}