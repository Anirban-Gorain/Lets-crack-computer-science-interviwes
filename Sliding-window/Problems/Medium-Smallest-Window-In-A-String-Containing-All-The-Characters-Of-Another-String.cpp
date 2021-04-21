#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define f                  first
// #define s                  second
#define ll                 long long
#define pub                .push_back()
#define pob                .push_back()
#define mp                 make_pair
#define p(x, y)            pair<x, y>
#define v(x)               vector<x>
#define m(x, y)            map<x, y>
#define pq(x)              priority_queue<x>
#define setbits(x)         __builtin_popcountll(x)
#define zrobits(x)         __builtin_ctzll(x)
#define sp(x, y)           fixed<<setprecision(y)<<x
#define dma(arr,n,type)    type *arr=new type[n];
#define w(x)               int x; while(x--)
#define sq(x)              x*x
#define its(x)             (string) #x
#define sti(x)             (int) x
#define fti(x)             (int) x
#define ONLINE_JUDGE       -1
#define deb(x)             cout << #x << " = " << x << endl;

void _fio(void)
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}

int _check_Given_Pattern(string _substr, string p)
{
    unordered_map <char, int> _frequency_Of_Substr;
    unordered_map <char, int> _frequency_Of_p;

    // Storing the frequency.

    for(int _each_Letter = 0; _each_Letter < _substr.length(); _each_Letter++)
    {
        _frequency_Of_Substr[_substr[_each_Letter]]++;
    }

    for(int _each_Letter = 0; _each_Letter < p.length(); _each_Letter++)
    {
        _frequency_Of_p[p[_each_Letter]]++;
    }

    // Checking the frequency same or not of _substr those letter which are present in p.

    for(int _each_Letter = 0; _each_Letter < p.length(); _each_Letter++)
    {
        if(!(_frequency_Of_p[p[_each_Letter]] <= _frequency_Of_Substr[p[_each_Letter]]))
        {
            return 0;
        }
    }

    return 1;
}

// Time complexity O(n) And space complexity O(1).

string smallestWindow_Brute (string s, string p)
{
    string _substr, _result_String;
    int _min, _s_length, _substr_Length,  _condition_Result, _starting_Index;

    _min = INT32_MAX;
    _s_length = s.length();

    for(int _start = 0; _start < _s_length; _start++)
    {
        for(int _end = 1, _terminate = _start; _terminate < _s_length; _terminate++, _end++)
        {
            _substr = s.substr(_start, _end);
            _condition_Result = _check_Given_Pattern(_substr, p);

            if(_condition_Result == 1)
            {
                _substr_Length = _substr.length();

                if(_substr_Length < _min)
                {
                    _result_String = _substr;
                    _min = _substr_Length;
                }
            }
        }
    }

    return (_min == INT32_MAX) ? "-1" : _result_String;
}

// Optimization.

string smallestWindow (string s, string p)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if(p.length() == 0)
    {
        return "-1";
    }

    int _s_Length, _start, _end, _cal_Result, _substr_Length, _min;
    unordered_map <char, int> _frequency_Of_p;
    string _substring, _result_String;
    _start = _end = 0;
    _min = INT32_MAX;

    _s_Length = s.length();

    for(int _each_Letter = 0; _each_Letter < p.length(); _each_Letter++)
    {
        _frequency_Of_p[p[_each_Letter]]++;
    }
    _cal_Result = _frequency_Of_p.size();


    while (_end < _s_Length)
    {

        _substring = s.substr(_start, _end + 1);
        _substr_Length = _substring.length();

        if(_frequency_Of_p.find(s[_end]) != _frequency_Of_p.end())
        {
            _frequency_Of_p[s[_end]]--;

            if(_frequency_Of_p[s[_end]] == 0)
            {
                _cal_Result--;
            }
        }

        if(_cal_Result == 0)
        {
            if(_min > _substr_Length)
            {
                _min = _substr_Length;
            }

            while (_cal_Result == 0)
            {
                if(_frequency_Of_p.find(s[_start]) != _frequency_Of_p.end())
                {
                    _frequency_Of_p[s[_start]]++;

                    if(_frequency_Of_p[s[_start]] == 1)
                    {
                        _substring = s.substr(_start, _end - _start + 1);
                        _substr_Length = _substring.length();

                        if(_min > _substr_Length || (_substring.length() == s.length()))
                        {
                            _result_String = _substring;
                            _min = _substr_Length;
                        }
                        _cal_Result = 1;
                        _end++;
                    }
                }
                _start++;
            }
            
        }
        else
        {
            _end++;
        }
    }
    
    return (_min == INT32_MAX) ? "-1" : _result_String;
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    cout << smallestWindow("zoomlazapzo", "oza");

    return 0;

}