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

// A O(n^2) time complexity and O(1) space complexity solution.

int subarraySum(vector<int>& nums, int k)
{
    int _sum;
    int _number_Of_Sub_Arrays = 0;

    for(int _terverse = 0; _terverse < nums.size(); _terverse++)
    {
        _sum = 0;
        for(int _subarray_Maker = _terverse; _subarray_Maker < nums.size(); _subarray_Maker++)
        {
            _sum += nums[_subarray_Maker];

            if(k == _sum)
            {
                _number_Of_Sub_Arrays++;
            }
        }
    }
    return _number_Of_Sub_Arrays;
}

// A O(n) time complexity and O(1) space complexity solution.

int subarraySum_Efficient(vector <int> & nums, int k)
{
    if(nums.size() == 0)
    {
        return 0;
    }

    unordered_map <int, int> _prefix_Sum_And_Their_Frequency;
    int _calculate_Prefix_Sum = 0;
    int _number_Of_Sub_Array = 0;

    for(int _terverse = 0; _terverse < nums.size(); _terverse++)
    {
        _calculate_Prefix_Sum += nums.at(_terverse);

        if(_calculate_Prefix_Sum == k)
        {
            _number_Of_Sub_Array++;
        }

        if(_prefix_Sum_And_Their_Frequency.find(_calculate_Prefix_Sum - k) != _prefix_Sum_And_Their_Frequency.end())
        {
            _number_Of_Sub_Array += _prefix_Sum_And_Their_Frequency[_calculate_Prefix_Sum - k];
        }

        _prefix_Sum_And_Their_Frequency[_calculate_Prefix_Sum]++;
    }

    return _number_Of_Sub_Array;
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    int _array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    /* 
    
        Problem link : https://leetcode.com/problems/subarray-sum-equals-k/submissions/

    */

    return 0;

}