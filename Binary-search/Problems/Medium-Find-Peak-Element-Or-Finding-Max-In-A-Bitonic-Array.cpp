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

    int findPeakElement(vector<int> & nums)
    {

        if(nums.size() == 1)
        {
            return 0;
        }

        int _start, _end, _mid, _length;

        _start = 0;
        _length = nums.size();
        _end = (nums.size() - 1);

        while (_start <= _end)
        {
            _mid = _start - (_start - _end) / 2;

            if(_mid == _length - 1)
            {
                if(nums[_mid] > nums[_mid - 1])
                {
                    return _mid;
                }
            }
            else if(_mid == 0)
            {
                if(nums[0] > nums[1])
                {
                    return 0;
                }
                else
                {
                    return 1;
                }
            }
            else if((nums[_mid] > nums[_mid + 1]) && nums[_mid - 1] < nums[_mid])
            {
                return _mid;
            }
            else if(nums[_mid] < nums[_mid - 1])
            {
                _end = _mid - 1;
            }
            else if(nums[_mid] < nums[_mid + 1])
            {
                _start = _mid + 1;
            }
        }
        
        return -1;
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
    vector <int> _elements = {1,2,1,3,5,6,4};
    cout << _test.findPeakElement(_elements);

    return 0;

}