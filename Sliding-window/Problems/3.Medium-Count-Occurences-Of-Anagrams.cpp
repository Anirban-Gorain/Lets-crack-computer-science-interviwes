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

	int search(string pat, string txt)
    {
        int _last_Point_Window = pat.length() - 1;
        int _first_Point_Window = 0;
        int _result_Count = 0;

        while (_last_Point_Window < txt.length())
        {
            if(_check_Anagram(txt.substr(_first_Point_Window, pat.length()), pat))
            {
                _result_Count++;
            }

            _first_Point_Window++;
            _last_Point_Window++;
        }

        return _result_Count;
	}

    int _check_Anagram(string _str_1, string _str_2)
    {
        int _data_Str_1[123] = {0};
        int _data_Str_2[123] = {0};

        for(int _index = 0; _index < _str_1.length(); _index++)
        {
            _data_Str_1[(int) _str_1[_index]]++;
            _data_Str_2[(int) _str_2[_index]]++;
        }
        
        for(int _index = 0; _index < 123; _index++)
        {
            // cout  << _data_Str_1[_index] << _data_Str_1[_index] << " ";
            if(!(_data_Str_1[_index] == _data_Str_2[_index]))
            {
                return 0;
            }

        }

        return 1;
    }
};

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    string txt;
    string pat;
    Solution _obj; 

    cin >> txt >> pat;

    cout << _obj.search(pat, txt);

    return 0;

}