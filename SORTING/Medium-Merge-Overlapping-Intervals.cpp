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

bool _is_Overlapping(int _ith_Start, int _ith_End, int _jth_Start, int _jth_End)
{
    if(_ith_Start > _jth_Start)
    {
        if(_ith_Start >= _jth_Start && _ith_Start <= _jth_End)
            return 1;
        else   
            return 0;
    }
    else
    {
        // _ith_Start < _jth_Start

        if(_jth_Start >= _ith_Start && _jth_Start <= _ith_End)
            return 1;
        else   
            return 0;
    }
}

// Efficient sol.

bool _comparator(vector <int> &_first, vector <int> &_last)
{
    return _first[0]<_last[0];
}

class Solution
{
    public:

    vector<vector<int>> merge_Naive(vector<vector<int>> _point)
    {
        int _n = _point.size();

        bool _arr[_n] /* Denotes used points */; fill_n(_arr, _n, 1);

        for(int _i = 0; _i<_n; _i++)
        {
            if(_arr[_i] == 0)
                continue;
                
            int _ith_Start = _point[_i][0],  _ith_End = _point[_i][1],  _jth_Start,  _jth_End;

            for(int _j = 0; _j <_n; _j++)
            {
                if(_i == _j || /* Because it is used point */ _arr[_j] == 0)
                    continue;

                _jth_Start = _point[_j][0];
                _jth_End = _point[_j][1];

                if(_is_Overlapping(_ith_Start, _ith_End, _jth_Start, _jth_End) == 1)
                {
                    _arr[_j] = 0;
                    _point[_i][0] = min(_ith_Start, _jth_Start);
                    _point[_i][1] = max(_ith_End, _jth_End);
                }
            }
        }

        vector<vector<int>> _ans;

        for(int _i = 0; _i < _point.size(); _i++)
        {
            if(_arr[_i] == 1)
            {
                _ans.push_back(_point[_i]);
            }
        }

        return _ans;
    }

    vector<vector<int>> merge(vector<vector<int>> _point)
    {
        sort(_point.begin(), _point.end(), _comparator);

        int _last_Can_Be_Merged = 0; // Assuming first is sorted
        int _n = _point.size();

        for(int _i = 1; _i < _n; _i++)
        {
            if(/* Checking the first part already done */ _point[_last_Can_Be_Merged][1] >= _point[_i][0])
            {
                _point[_last_Can_Be_Merged][0] = min(_point[_last_Can_Be_Merged][0], _point[_i][0]);
                _point[_last_Can_Be_Merged][1] = max(_point[_last_Can_Be_Merged][1], _point[_i][1]);
            }
            else
            {
                _last_Can_Be_Merged++;
                _point[_last_Can_Be_Merged] = _point[_i];
            }
        }

        // Putting all the required points.

        vector<vector<int>> _res;

        for(int _i = 0; _i<_last_Can_Be_Merged; _i++)
        {
            _res.push_back(_point[_i]);
        }

        return _res;
    }
};

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    vector <vector<int>> _point =
    {
        {7, 9}, {6, 10}, {4, 5}, {1, 3}, {2, 4}
    };

    Solution _t;
    _point = _t.merge(_point);

    for(int _i = 0; _i < _point.size(); _i++)
    {
        cout << "[" << _point[_i][0] << ", " << _point[_i][1] << "] ";
    }

    return 0;

}