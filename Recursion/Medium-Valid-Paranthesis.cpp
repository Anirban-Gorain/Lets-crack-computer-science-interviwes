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

        vector<string> generateParenthesis(int n)
        {
            vector <string> _receive = this -> _genrate(n, n, "");
            return _receive;
        }

        vector <string> _genrate(int _no_Of_Opening, int _no_Of_Closing, string _output)
        {
            if(_no_Of_Opening == 0 && _no_Of_Closing == 0)
            {
                vector <string> _send_Output;
                _send_Output.push_back(_output);
                return _send_Output;
            }

            vector <string> _main_Result;

            if(_no_Of_Opening != 0)
            {
                vector <string> _hold = _genrate(_no_Of_Opening - 1, _no_Of_Closing, _output + "(");
               
                for(int _ind = 0;  _ind < _hold.size(); _ind++)
                {
                    _main_Result.push_back(_hold[_ind]);
                }
            }

            /* 
                If one extra open is ued then we can ues close.
            */

            if(_no_Of_Closing > _no_Of_Opening)
            {
                vector <string> _hold = _genrate(_no_Of_Opening, _no_Of_Closing - 1, _output + ")");

                for(int _ind = 0;  _ind < _hold.size(); _ind++)
                {
                    _main_Result.push_back(_hold[_ind]);
                }
            }

            return _main_Result;
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

    vector <string> _catch;

    _catch = _test.generateParenthesis(5);

    for(int _ind = 0; _ind < _catch.size(); _ind++)
    {
        cout << _catch[_ind] << '\n';
    }

    return 0;

}