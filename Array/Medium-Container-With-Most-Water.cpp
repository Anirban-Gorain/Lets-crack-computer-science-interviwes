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

class Solution
{
    public:

    int maxArea(vector <int> & height)
    {
        int _n = height.size();

        if(_n == 2)
            return min(height[0], height[1]) * 1;

        int _if_I;
        int _if_J;
        int _i = 0;
        int _j = _n-1;
        int _max = INT_MIN;

        while(_i < _j)
        {
            int _water = (_j-_i) * min(height[_i], height[_j]);
            _max = max(_water, _max);

            // Which pointer we should move.

            if(height[_i] > height[_j])
            {
                _j--;
            }
            else if(height[_i] < height[_j])
            {
                _i++;
            }
            else
            {
                _i++;
                _j--;
            }
        }

        return _max;
    }
};

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    Solution _test;
    vector<int> _arr = {8, 200, 25, 8}; 

    cout << _test.maxArea(_arr);

    return 0;

}