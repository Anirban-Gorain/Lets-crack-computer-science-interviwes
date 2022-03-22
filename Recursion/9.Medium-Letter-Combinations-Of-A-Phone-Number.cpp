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

    string _maped_Char(char _domain)
    {
        unordered_map <char, string> _domain_Range;

        _domain_Range.insert({'2', "abc"});
        _domain_Range.insert({'3', "def"});
        _domain_Range.insert({'4', "ghi"});
        _domain_Range.insert({'5', "jkl"});
        _domain_Range.insert({'6', "mno"});
        _domain_Range.insert({'7', "pqrs"});
        _domain_Range.insert({'8', "tuv"});
        _domain_Range.insert({'9', "wxyz"});

        return (_domain_Range.find(_domain) -> second);
    }
    
    vector <string> letterCombinations(string digits, string _op = "")
    {
        if(digits == "")
        {
            vector <string> _send;
            _send.push_back(_op);
            return _send;
        }

        vector <string> _result;
        vector <string> _store_Temp;
        string _no_To_Char = this -> _maped_Char(digits[0]);
        string _tem = digits.erase(0, 1);

        for(int _ind = 0; _ind < _no_To_Char.length(); _ind++)
        {
            _store_Temp = letterCombinations(_tem, _op + _no_To_Char[_ind]);

            for(auto _ite = _store_Temp.begin(); _ite != _store_Temp.end(); _ite++)
            {
                _result.push_back(*_ite);
            }
        }

        return _result;
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
    vector <string> p = _test.letterCombinations("23");

    for(auto _ite = p.begin(); _ite != p.end(); _ite++)
            {
                cout << (*_ite) << endl;
            }

    return 0;

}