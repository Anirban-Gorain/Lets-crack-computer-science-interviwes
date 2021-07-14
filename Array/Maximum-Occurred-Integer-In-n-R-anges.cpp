#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define f first
#define s second
#define ll long long
#define pub .push_back()
#define pob .push_back()
#define mp make_pair
#define p(_x, y) pair<_x, y>
#define v(_x) vector<_x>
#define m(_x, y) map<_x, y>
#define pq(_x) priority_queue<_x>
#define setbits(_x) __builtin_popcountll(_x)
#define zrobits(_x) __builtin_ctzll(_x)
#define sp(_x, y) fi_xed<<setprecision(y)<<_x
#define dma(arr,n,type) type *arr=new type[n];
#define w(_x) int _x; while(_x--)
#define sq(_x) _x*_x
#define its(_x) (string) #_x
#define sti(_x) (int) _x
#define fti(_x) (int) _x
#define deb(_x) cout << #_x << " = " << _x << endl;
#define loop(_x, _s ,_n) for(int _x = _s; _x < _n; ++ _x)

void _fio(void)
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}

// T/C O(m*n) and Aux space O(1)

vector <int> _start = {1, 5, 9, 13, 21};
vector <int> _end = {15, 8, 12, 20, 30};

int _max_Apperaing()
{
    unordered_map <int, int> _fre;

    for(int _i = 0; _i < _start.size(); _i++)
    {
        for(int _j = _start[_i]; _j <= _end[_j]; _j++)
        {
            _fre[_j]++;
        }
    }

    // Finding the max

    // Now we can find simple max entry and then we have to return the key.
}

// T/C O(n) and Aux space O(1).

int _max_Apperaing()
{
    // We will assume max range will be 1000 means [1, 1000].
    
    vector <int> _rec(1000);

    for(int _i = 0; _i < _start.size(); _i++)
    {
        _rec[_start[_i]]++;
        _rec[_end[_i] + 1]++;
    }

    int _max , _res;
    _max = _res = _rec[0];

    for(int _i = 1; _i < 1000; _i++)
    {
        _rec[_i] = _rec[_i] + _rec[_i - 1];

        if(_max < _rec[_i])
        {
            _max = _rec[_i];
            _res = _rec[_i];
        }
    }

    return _res;
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

   

    return 0;

}