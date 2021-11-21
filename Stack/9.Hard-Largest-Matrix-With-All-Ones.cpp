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

int _largest_Rect_Area_In_Histo(int _arr[], int _n)
{
    int _res = 0;
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

        _s.push(_i);
    }

    while(_s.empty() == false)
    {
        int _top = _s.top();
        _s.pop();

        int _area = _arr[_top] * (_s.empty() ? _n : (_n - _s.top() - 1));
        _res = max(_area, _res);
    }

    return _res;    
}

const int _r = 4;
const int _c = 4;

// T/C O(r*c) and Aux space O(n)

int _largest_Matrix_With_All_Ones(int _arr[_r][_c])
{
    int _container[_r] = {};
    int _res = INT_MIN;

    // for(auto _x : _container)
    //     _x = 0;

    for(int _r1 = 0; _r1 < _r; _r1++)
    {
        for(int _c1 = 0; _c1 < _c; _c1++)
        {
            if(_arr[_r1][_c1] == 1)
                _container[_c1] += _arr[_r1][_c1];
            else
                _container[_c1] = 0;
        }

        int _temp = _largest_Rect_Area_In_Histo(_container, _c);
        _res = max(_res, _temp);
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

    int _arr[_r][_c] = {
                            {0, 1, 1, 0},
                            {1, 1, 1, 1},
                            {1, 1, 1, 1},
                            {1, 1, 0, 0}
                        };

    cout << _largest_Matrix_With_All_Ones(_arr);

    return 0;

}