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

    int removeDuplicates(vector<int> & nums)
    {
        int _current_Element = INT_MIN;
        int _result_Index = 0;
        int _size = 0;
        int _len = nums.size();

        for(int _i = 0; _i < _len; _i++)
        {
            if(nums[_i] != _current_Element)
            {
                _current_Element = nums[_i];
                nums[_result_Index] = _current_Element;
                cout << _current_Element << " ";
                _result_Index++;

                _size++;
            }
        }

        return _size;
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
    vector <int> nums = {1, 2};

     _test.removeDuplicates(nums);

    int _len = nums.size();

    for(int _i = 0; _i < 2; _i++)
    {
        cout << nums[_i] << " ";
    }



    return 0;

}