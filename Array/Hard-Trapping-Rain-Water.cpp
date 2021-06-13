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
#define ONLINE_JUDGE -1
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

    int trap(vector<int>& height)
    {
        // For each _i we will find Left-Max and Right-Max.
        // To compute how much water contain a _i is equal to, _rain = min(_l_Max, _r_Max) - height[_i];

        int _len = height.size();
        int _rain = 0;

        loop(_i, 1, _len - 1)
        {
            // _l_Max.

            int _l_Max = height[_i];

            loop(_j, 0, _i)
            {
                _l_Max = max(_l_Max, height[_j]);
            }

            // _r_Max.

            int _r_Max = height[_i];

            loop(_k, _i+1, _len)
            {
                _r_Max = max(_r_Max, height[_k]);
            }

            _rain += min(_l_Max, _r_Max) - height[_i];
        }

        return _rain;    
    }
};

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    vector <int> _height = {4,2,0,3,2,5};

    Solution _test;

    cout << _test.trap(_height);

    return 0;

}