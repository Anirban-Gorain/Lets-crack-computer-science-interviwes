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

    /* O(n^2) time complexity, And space complexity  O(_nums_1_Unique + _nums_2_Unique) */

    vector <int> intersection(vector <int> & nums1, vector <int> & nums2)
    {
        // Getting the distinct elements.

        unordered_set <int> _nums_1_Unique (nums1.begin(), nums1.end());
        unordered_set <int> _nums_2_Unique (nums2.begin(), nums2.end());

        // Finding teh intersection.

        vector <int> _result;
        int _check;

        for(auto _terverse_Nums_1 = _nums_1_Unique.begin(); _terverse_Nums_1 != _nums_1_Unique.end(); _terverse_Nums_1++)
        {
            _check = *(_terverse_Nums_1);
            for(auto _terverse_Nums_2 = _nums_2_Unique.begin(); _terverse_Nums_2 != _nums_2_Unique.end(); _terverse_Nums_2++)
            {
                if(_check == *(_terverse_Nums_2))
                {
                    _result.push_back(_check);
                    break;
                }
            }
        }
        return _result;
    }
    
    /* O(m + n) time complexity, And space complexity  O(_nums_1_Unique + _result) */

    vector <int> intersection(vector <int> & nums1, vector <int> & nums2)
    {
        // Getting the distinct elements.

        unordered_set <int> _nums_1_Unique (nums1.begin(), nums1.end());

        // Finding teh intersection.

        vector <int> _result;

        for(auto _terverse_Nums_2 = 0; _terverse_Nums_2 < nums2.size(); _terverse_Nums_2++)
        {
            if(_nums_1_Unique.find(nums2.at(_terverse_Nums_2)) != _nums_1_Unique.end())
            {
                _result.push_back(nums2.at(_terverse_Nums_2));
                _nums_1_Unique.erase(nums2.at(_terverse_Nums_2));
            }
        }
        return _result;
    }
};

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    // Easy-intersection-of-two-arrays, https://leetcode.com/problems/intersection-of-two-arrays/
    

    return 0;

}