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

    int climbStairs(int n)
    {
        _print_Steps(n + 1, "");
        return _no_Of_Steps(++n);
    }

    int _no_Of_Steps(int _from_Ground)
    {
        if(_from_Ground == 1 || _from_Ground < 0)
        {
            return 1;
        }

        int _total_No_Of_Way = 0;

        _total_No_Of_Way += _no_Of_Steps(_from_Ground - 1);

        if(_from_Ground - 2 > 0)
            _total_No_Of_Way += _no_Of_Steps(_from_Ground - 2);

        return _total_No_Of_Way;
    }

    // Print all steps.

    void _print_Steps(int _from_Ground, string _output)
    {
        if(_from_Ground == 1 || _from_Ground < 0)
        {
           cout << _output << endl;
           return;
        }

        _print_Steps(_from_Ground - 1, _output + "1");

        if(_from_Ground - 2 > 0)
            _print_Steps(_from_Ground - 2, _output + "2");
    }

    // Return result

    vector <string> _return_Steps(int _from_Ground, string _output)
    {
        if(_from_Ground == 1 || _from_Ground < 0)
        {
           vector <string> _send;
           _send.push_back(_output);

           return _send;
        }

        vector <string> _temp;
        vector <string> _main_Result;

        _main_Result = _return_Steps(_from_Ground - 1, _output + "1");

        if(_from_Ground - 2 > 0)
        {
            _temp = _return_Steps(_from_Ground - 2, _output + "2");

            for(auto _ite = _temp.begin(); _ite != _temp.end(); _ite++)
            {
                _main_Result.push_back(*_ite);
            }
        }
        
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
    cout << _test.climbStairs(10);

    return 0;

}