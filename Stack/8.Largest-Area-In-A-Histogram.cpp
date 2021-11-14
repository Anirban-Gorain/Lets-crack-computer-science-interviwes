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

// T/C O(n^2) and Aux space O(1)

int _largest_Rect_Area_In_Histo_Naive(vector<int> _arr)
{
    int _n = _arr.size();
    int _res = INT_MIN;

    for(int _i = 0; _i < _n; _i++)
    {
        int _cnt = _arr[_i];

        // Before current

        for(int _j = _i-1; _j != -1; _j--)
        {
            if(_arr[_j] >= _arr[_i])
                _cnt += _arr[_i];
            else
                break;
        }

        // After current

        for(int _j = _i+1; _j < _n; _j++)
        {
            if(_arr[_j] >= _arr[_i])
                _cnt += _arr[_i];
            else
                break;
        }

        _res = max(_res, _cnt);
    }

    return _res;
}

// T/C O(3n) and Aux space O(2n)

int _largest_Rect_Area_In_Histo(vector<int> _arr)
{
    int _res = 0;
    int _n = _arr.size();
    int _ps[_n], _ns[_n];
    
    stack <int> _s;

    _s.push(0);

    for(int _i = 0; _i < _n; _i++)
    {
        while(_s.empty() == false && _arr[_s.top()] >= _arr[_i])
            _s.pop();

        int _pse = _s.empty() ? -1 : _s.top();
        _ps[_i] = _pse;
        _s.push(_i);
    }
    
    while(_s.empty() == false)
    {
        _s.pop();
    }
    
    _s.push(_n - 1);

    for(int _i = _n-1; _i > 0; _i--)
    {
        while(_s.empty() == false && _arr[_s.top()] >= _arr[_i])
            _s.pop();

        int _nse = _s.empty() ? _n : _s.top();
        _ns[_i] = _nse;
        _s.push(_i);
    }
    
    for(int _i = 0 ; _i < _n; _i++)
    {
        int _curr = _arr[_i];

        _curr += (_i-_ps[_i]-1) * _arr[_i];
        _curr += (_ns[_i]-_i-1) * _arr[_i];

        _res = max(_res, _curr);
    }

    return _res;
}

// T/C O(n) and Aux space O(n)

int _largest_Rect_Area_In_Histo(vector<int> _arr)
{
    int _res = 0;
    int _n = _arr.size();
    stack<int> _s;

    for(int _i = 0; _i < _n; _i++)
    {
        while(_s.empty() == false && _arr[_s.top()] >= _arr[_i])
        {
            // Calculating area.

            int _top = _s.top();
            _s.pop();

            int _area = _arr[_top] * (_s.empty() ? _i : (_i - _s.top() - 1));
            _res = max(_area, _res);
        }

        while(_s.empty() == false)
        {
            int _top = _s.top();
            _s.pop();

            int _area = _arr[_top] * (_s.empty() ? _n : (_n - _s.top() - 1));
            _res = max(_area, _res);
        }
    }
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    vector<int> _arr = {2, 5, 1};

    cout << _largest_Rect_Area_In_Histo(_arr);

    return 0;

}