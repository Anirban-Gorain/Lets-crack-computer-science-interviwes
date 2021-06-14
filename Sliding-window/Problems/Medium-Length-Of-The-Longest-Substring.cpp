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
#define loop(_x, _s ,_n) for(int _x = _s; _x < _n; ++ _x)
#define deb(x) cout << #x << " = " << x << endl;

void _fio(void)
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}

int _is_Substring_Contain_Repeating_Char(string _substr)
{
    int _unique_Char_Data[256] = {0};

    for(int _each_Char = 0; _each_Char < _substr.length(); _each_Char++)
    {
        _unique_Char_Data[(int) _substr[_each_Char]] += 1;
    }

    for(int _terverse = 0; _terverse < 256; _terverse++)
    {
        if(_unique_Char_Data[_terverse] > 1)
        {
            return 1;
        }
    }

    return 0;
}

// Time complexity o(N^2) Space O(1).

int longestUniqueSubstr_Brute(string S)
{
    if(S.length() == 0)
        return 0;

    string _substr;
    int _max = INT32_MIN;

    for(int _start = 0; _start < S.length(); _start++)
    {
        for(int _end = 1, _terminate = _start; _terminate < S.length(); _end++, _terminate++)
        {
            _substr = S.substr(_start, _end);
            
            if(_is_Substring_Contain_Repeating_Char(_substr) != 1)
            {
                int _length = _substr.length();
                if(_max < _length)
                {
                    _max = _substr.length();
                }
            }
            else
            {
                break;
            }
        }
    }

    return (_max < 0) ? 0 : _max;
}

// Optimization.

class Solution
{
    public:

    int lengthOfLongestSubstring(string s)
    {
        if(s.length() == 0)
            return 0;
        
        int _len = s.length();
        int _fp = 0;
        int _lp = 0;
        int _ans = INT_MIN;

        unordered_map <char, int> _data;

        while(_lp < _len)
        {
            _data[s[_lp]]++;

            if(_data.size() == _lp - _fp + 1)
            {
                _ans = max(_ans, _lp - _fp + 1);
                _lp++;
            }
            else if(_data.size() < _lp - _fp + 1)
            {
                while (_data.size() < _lp - _fp + 1)
                {
                    _data[s[_fp]]--;

                    if(_data[s[_fp]] == 0)
                    {
                        _data.erase(s[_fp]);
                    }

                    _fp++;
                }
                _lp++;
            }
        }

        return _ans;
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
    cout << _test.lengthOfLongestSubstring("pwwekw");

    return 0;

}