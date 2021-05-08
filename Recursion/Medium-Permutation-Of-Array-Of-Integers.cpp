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

    vector <vector<int>> permute(vector<int> & nums)
    {
        vector <int> _result;
        vector <vector <int>> _output = this -> Solve(nums, _result);

        return _output;
    }

    vector <vector<int>> Solve(vector <int> _nums, vector <int> _result)
    {
        if(_nums.size() == 0)
        {
            vector <vector<int>> _base_Row;
            _base_Row.push_back(_result);

            return _base_Row;
        }

        vector <vector <int>> _main_Result;
        vector <vector <int>> _catch;
        vector <int> _temp_Nums;

        for(int _index = 0; _index < _nums.size(); _index++)
        {
            _result.push_back(_nums[_index]);
            _temp_Nums = _nums;
            _temp_Nums.erase(find(_temp_Nums.begin(), _temp_Nums.end(), _nums[_index]));

            _catch = Solve(_temp_Nums, _result);

            for(int _inserter = 0; _inserter < _catch.size(); _inserter++)
            {
                _main_Result.push_back(_catch[_inserter]);
            }

            _result.pop_back();
            _temp_Nums.clear();
            
        }
        return _main_Result;
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
    vector <int> _x = {1,2,3,4,5,6};
    _test.permute(_x);

    return 0;

}