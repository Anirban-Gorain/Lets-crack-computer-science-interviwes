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

// T/C O(nlog(n)) & S/C O(1).

class Solution
{
    public:

    int longestConsecutive(vector<int> & nums)
    {
        sort(nums.begin(), nums.end());

        int _counter = 1;
        int _max = 1;
        int _n = nums.size();
        
        if(_n == 0)
            return 0;

        for(int _i = 1; _i < _n; _i++)
        {
            if(nums[_i]-1 == nums[_i - 1])
            {
                _counter++;
            }
            else if(nums[_i] != nums[_i - 1])
            {
                _max = max(_max, _counter);
                _counter = 1;
            }
        } 
            
        return max(_counter, _max);
    }

// T/C O(3n) and S/C O(1)

    int longestConsecutive(vector<int> & nums)
    {
        int _n = nums.size();
         
         if(_n == 0)
            return 0;
         
        unordered_set <int> _elem;

        for(int _i = 0; _i < _n; _i++)
        {
            _elem.insert(nums[_i]);
        }

        int _max = INT_MIN;

        for(auto _item : _elem)
        {
            if(_elem.find(_item-1) == _elem.end())
            {
                int _count = 0;

                while(_elem.find(_item + _count) != _elem.end())
                {
                    _count++;
                }

                _max = max(_max, _count);
            }
        }
        return _max;
    }
};

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    int N = 4;
    int a[] = {1,5,8,10};

    return 0;

}