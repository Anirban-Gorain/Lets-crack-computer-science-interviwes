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

    vector<string> letterCasePermutation(string S)
    {
        if(S == "")
        {
            vector<string> _send;
            _send.push_back("");

            return _send;
        }

        vector<string> _catch;
        vector<string> _make;

        char _temp = S[0];
        S.erase(S.begin());

        _catch = letterCasePermutation(S);

        for(int _i = 0; _i < _catch.size(); _i++)
        {
            char _t = toupper(_temp);

            _make.push_back(_t + _catch[_i]);

            if(!(_temp >= 48 && _temp <= 57))
            {
                _t = tolower(_temp);
                _make.push_back(_t + _catch[_i]);
            }
        }

        return _make;
    }
};

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    Solution _o;
    vector <string> _c = _o.letterCasePermutation("a1b2");

    auto _ite = _c.begin();
    while(_ite != _c.end())
    {
        cout << *(_ite) << " ";
        _ite++;
    }

    return 0;

}