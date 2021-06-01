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

    void moveZeroes(vector<int> & nums)
    {
        int _index = -1;
        int _zeros = 0;
        int _size = nums.size();

        for(int _i = 0; _i < _size; _i++)
        {
            if(_index != -1 && nums[_i] != 0)
            {
                nums[_index] = nums[_i];
                _index++;
            }
            else if(nums[_i] == 0 && _index == -1)
            {
                _index = _i;
                _zeros++;
            }
            else if(nums[_i] == 0)
            {
                _zeros++;
            }
        }

        // Adding the zeros

        for(int _i = _size - _zeros; _i < _size; _i++)
        {
            nums[_i] = 0;
        }
    }
};

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    

    return 0;

}