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
        int _count_Of_Non_Zero = 0;

        for(int _i = 0; _i < nums.size(); _i++)
        {
            if(nums[_i] != 0)
            {
                swap(nums[_count_Of_Non_Zero], nums[_i]);
                _count_Of_Non_Zero++;
            }
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

    Solution _abc;
    v(int) _x = {0, 0, 12, 0, 5, 8};

    _abc.moveZeroes(_x);

    for(int _i = 0; _i < _x.size(); _i++)
    {
        cout << _x[_i] << " ";
    }

    return 0;

}