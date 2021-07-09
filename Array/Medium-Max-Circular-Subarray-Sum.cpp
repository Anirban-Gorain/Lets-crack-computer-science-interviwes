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

    // T/C O(n^2) & S/C O(1)

    int maxSubarraySumCircular(vector<int> & nums)
    {
        int _n = nums.size();
        int _max = INT_MIN;

        loop(_i, 0, _n)
        {
            int _till = _i;
            int _sum = 0;

            do
            {
                _sum += nums[(_till % _n)];
                _max = max(_max, _sum);

                _till++;
            } while ((_till % _n) != _i);

        }

        return _max;
    }

    // T/C O(n) & Aux O(1)

    int maxSubarraySumCircular(vector<int> & nums)
    {
        int _n = nums.size();

        // Finding the max sum in a simple subarray.

        int _sum = 0, _max = INT_MIN;

        for(int _i = 0; _i < _n; _i++)
        {
            _sum += nums[_i];
            _max = max(_sum, _max);

            if(_sum < 0)
                _sum = 0;
        }

        if(_max < 0)
            return _max;

        // Find the min sum in a circular subarray. How ? Entire-array-sum - Min-sum-in-simple-array(Using modified Kadane's).

        _sum = 0; int _min = INT_MAX;

        for(int _i = 0; _i < _n; _i++)
        {
            _sum += nums[_i];
            _min = min(_sum, _min);

            if(_sum > 0)
                _sum = 0;
        }

        int _max_Sum = accumulate(nums.begin(), nums.end(), 0) - _min;

        return max(_max_Sum, _max);
    }

    // Awesome implementation by Sandeep sir

    int normalMaxSum(int arr[], int n)
    {
        int res = arr[0];

        int maxEnding = arr[0];

        for(int i = 1; i < n; i++)
        {
            maxEnding = max(maxEnding + arr[i], arr[i]);

            res = max(maxEnding, res);
        }
        
        return res;
    }

    int overallMaxSum(int arr[], int n)
    {
        int max_normal = normalMaxSum(arr, n);

        if(max_normal < 0)
            return max_normal;

        int arr_sum = 0;

        for(int i = 0; i < n; i++)
        {
            arr_sum += arr[i];

            arr[i] = -arr[i];
        }

        int max_circular = arr_sum + normalMaxSum(arr, n);

        return max(max_circular, max_normal);
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
    v(int) nums = {-8, 7, 6};

    cout << _test.maxSubarraySumCircular(nums);

    return 0;

}