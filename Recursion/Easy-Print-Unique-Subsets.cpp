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

unordered_set <string> _unique_Subset(string _data, string _subset = "")
{
    if(_data.size() == 0)
    {
        unordered_set <string> _send_Result;

        _send_Result.insert(_subset);
        return _send_Result;
    }

    string _temp = "";
    unordered_set <string> _catch_One;
    unordered_set <string> _catch_Two;

    _temp =  _temp + _data.at(0);
    _data.erase(_data.begin());

    _catch_One = _unique_Subset(_data, _subset + _temp);
    _catch_Two = _unique_Subset(_data, _subset);

    unordered_set <string> _result(_catch_One);
    _result.insert(_catch_Two.begin(), _catch_Two.end());

    return _result;
}

// If interviewer says to print only

void _unique(string _ip, string _op, vector<pair<string, string>> & _rec)
{
    if(_ip == "")
    {
        cout << _op << endl;
        return;
    }

    for(int _i = 0; _i < _rec.size(); _i++)
    {
        if((_rec[_i].first == _ip && _rec[_i].second == _op))
        {
            return;
        }
    }
    
    _rec.push_back({_ip, _op});

    char _tem = _ip[0];
    _ip.erase(_ip.begin());

    _unique(_ip, _op + _tem, _rec);
    _unique(_ip, _op, _rec);
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    /*
    
        Print unique subsets.

        a,a,c

        aac, aa,ac, a, ac, a, c, ""

        Removing duplicates,

        aac, aa, ac, a, c, ""

    
    */

   unordered_set <string> _catch;

   _catch=_unique_Subset("aac", "");

   for(auto _iterator = _catch.begin(); _iterator != _catch.end(); _iterator++)
   {
        cout << *(_iterator) << endl;
   }

    return 0;

}