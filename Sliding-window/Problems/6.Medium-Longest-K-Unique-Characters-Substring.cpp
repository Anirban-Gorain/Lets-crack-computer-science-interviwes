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
#define w(x) int i = x; while(i--)
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

int _is_Substring_Contain_Desired_No_Of_Char(string _substr)
{
    int _unique_Char_Data[256] = {0};

    for(int _each_Char = 0; _each_Char < _substr.length(); _each_Char++)
    {
        if(_unique_Char_Data[(int) _substr[_each_Char]] != 1)
        {
            _unique_Char_Data[(int) _substr[_each_Char]] = 1;
        }
    }

    int _sum = 0;

    w(255)
    {
        _sum += _unique_Char_Data[i];
    }

    return _sum;
}

// Time complexity O(n^2) and Space Complexity O(1).

int _longest_Substring_Brute(string _data, int k)
{
    int _start_Giver = 0;
    int _start_Picker;
    int _end;
    int _length = _data.length();
    int _max = INT32_MIN;

    while (_start_Giver < _length)
    {
        _start_Picker = _start_Giver;
        _end = 0;

        while (_start_Picker < _length)
        {
            string _substring = _data.substr(_start_Giver, _end);
            cout << _substring << " ";
            if(_is_Substring_Contain_Desired_No_Of_Char(_substring) == 1)
            {
                int _substr_Length = _substring.length();
                _max = max(_max, _substr_Length);
            }

            _end++;
            _start_Picker++;
        }
        
        _start_Giver++;
    }
    return (_max < 0) ? 0 : _max;
}

// Optimized.

int _longest_Substring(string _data, int k)
{
    int _start, _end, _length, _no_Of_Unique_Char, _max_Substr;
    string _substr;
    _start = _end = 0;
    _length = _data.length();
    _max_Substr = INT32_MIN;

    while(_end < _length)
    {
        // Calculations
        
        _substr = _data.substr(_start, _end + 1);
        _no_Of_Unique_Char = _is_Substring_Contain_Desired_No_Of_Char(_substr);
        
        if(_no_Of_Unique_Char < k)
        {
            _end++;
        }
        else if(_no_Of_Unique_Char == k)
        {
            int _substr_Length = _substr.length();
            _max_Substr = max(_max_Substr, _substr_Length);
            _end++;
        }
        else if(_no_Of_Unique_Char > k)
        {
            while (_no_Of_Unique_Char > k)
            {
                _start++;
                _substr = _data.substr(_start, _end + 1);
                _no_Of_Unique_Char = _is_Substring_Contain_Desired_No_Of_Char(_substr);
            }
        }
    }

    return (_max_Substr < 0) ? 0 : _max_Substr;
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    string _x = "aaaa";
    cout << _longest_Substring_Brute("BBBbbbbBBB", 1);

    return 0;

}