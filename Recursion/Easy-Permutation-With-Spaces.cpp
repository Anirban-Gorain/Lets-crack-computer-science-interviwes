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

    vector<string> permutation(string S)
    {
        if(S.length() == 1)
        {
            vector <string> _send;

            _send.push_back(S);
            return _send;
        }

        string _temp;
        _temp = S.back();
        vector <string> _catch_One;
        vector <string> _catch_Two;
        vector <string> _send;

        S.pop_back();

        _catch_One = permutation(S);

        for(int _terverse = 0; _terverse < _catch_One.size(); _terverse++)
        {
            string _make_Result = _catch_One[_terverse];

            _make_Result = _make_Result + " " + _temp;
            _send.push_back(_make_Result);
        }

        _catch_Two = permutation(S);

        for(int _terverse = 0; _terverse < _catch_Two.size(); _terverse++)
        {
            string _make_Result = _catch_Two[_terverse];

            _make_Result = _make_Result + "" + _temp;
            _send.push_back(_make_Result);
        }

        return _send;
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

    vector <string> _catch = _test.permutation("abc");

    for(auto _ite = _catch.begin(); _ite != _catch.end(); _ite++)
    {
        cout << *(_ite) << endl;
    }

    return 0;

}