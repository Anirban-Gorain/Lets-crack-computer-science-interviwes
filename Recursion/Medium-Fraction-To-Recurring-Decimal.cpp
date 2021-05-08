#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define f first
#define s second
#define ll long long
#define pub .push_back()
#define pob .push_back()
#define mp make_pair
#define p(x, y) pair<x, y>
#define v(x) vector<x>
#define m(x, y) map<x, y>
#define pq(x) priority_queue<x>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define sp(x, y) fixed<<setprecision(y)<<x
#define dma(arr,n,type) type *arr=new type[n];
#define w(x) int x; while(x--)
#define sq(x) x*x
#define its(x) (string) #x
#define sti(x) (int) x
#define fti(x) (int) x
#define ONLINE_JUDGE -1
#define deb(x) cout << #x << " = " << x << endl;

void _fio(void)
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}

class Solution
{
    public:

    string fractionToDecimal(long long numerator, long long denominator)
    {
            bool _is_Negative = false;

            if((numerator < 0 && denominator > 0) || (numerator > 0 && denominator < 0))
            {
                _is_Negative = true;
            }

            numerator = abs(numerator);
            denominator = abs(denominator);

            string _ans;
            long long _res = numerator / denominator;
            long long _rem = numerator % denominator;
            
            _ans.append(to_string(_res));

            if(_is_Negative)
            {
                _ans.insert(0, "-");
            }

            if(_rem == 0)
            {
                return _ans;
            }
            else
            {
                unordered_map <long long, string> _remainder_Data;
                string _catch = _get_Frac_Part(_rem, denominator, 1, _ans + ".", _remainder_Data);

                return _catch;
            }

            return "";
    }

    string _get_Frac_Part(long long numerator, long long denominator, long long _rem, string _ans, unordered_map <long long, string> & _remainder_Data)
    {
        if(_rem == 0)
        {
            return _ans;
        }
        else if(_remainder_Data.find(_rem) != _remainder_Data.end())
        {
            string _repeat_Position = _remainder_Data.find(_rem) -> second;
            _ans.insert(_repeat_Position.length(), "(");
            _ans.append(")");

            return _ans;
        }

        _remainder_Data.insert({numerator, _ans});

        numerator = numerator * 10;
        int _res = numerator / denominator;
        _rem = numerator % denominator;

        return _get_Frac_Part(_rem, denominator, _rem, _ans + to_string(_res), _remainder_Data);
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
    cout << _test.fractionToDecimal(-2147483648, 1);

    return 0;

}