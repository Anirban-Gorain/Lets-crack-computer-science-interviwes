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
        return this -> _permute_By_Case_Change(S);
    }

    vector <string> _permute_By_Case_Change(string _main, string _result = "")
    {
        if(_main.length() == 0)
        {
            vector <string> _send;
            _send.push_back(_result);
            return _send;
        }

        string _digits = "";
        
        while(_main[0] >= 48 && _main[0] <= 57)
        {
            _digits += _main[0];
            _main.erase(_main.begin() + 0);
        }

        string _lower = "";
        string _upper = "";

        if(_main.length() > 0)
        {
            char _temp_First = _main[0];

            char _lowe_C = tolower(_temp_First);
            char _upper_C = toupper(_temp_First);

            _lower.append(1, _lowe_C);
            _upper.append(1, _upper_C);

            _main.erase(_main.begin() + 0);
        }


        if(_lower.length() == 0 && _digits.length() > 0)
        {
            vector <string> _c1;
            _c1 = _permute_By_Case_Change(_main, _result + _digits +_lower);
            return _c1;
        }
        else
        {
            vector <string> _c1;
            vector <string> _c2;
            vector <string >_result_Send;

            _c1 = _permute_By_Case_Change(_main, _result + _digits +_lower);
            _c2 = _permute_By_Case_Change(_main, _result + _digits +_upper);

            auto _ite = _c1.begin();
            while(_ite != _c1.end())
            {
                _result_Send.push_back(*(_ite));
                _ite++;
            }

            _ite = _c2.begin();
            while(_ite != _c2.end())
            {
                _result_Send.push_back(*(_ite));
                _ite++;
            }

            return _result_Send;
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