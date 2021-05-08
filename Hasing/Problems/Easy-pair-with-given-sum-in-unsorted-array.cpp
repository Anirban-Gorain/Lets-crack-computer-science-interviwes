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
	
    /* O(n^2) time complexity, And space complexity O(1) */

	bool hasArrayTwoCandidates(int arr[], int n, int x)
    {
        int _sum;

        for(int _pick_One = 0; _pick_One < n; _pick_One++)
        {
            _sum = arr[_pick_One];

            for(int _compare_With_Rest_Of_The_Elements = 0; _compare_With_Rest_Of_The_Elements < n; _compare_With_Rest_Of_The_Elements++)
            {
                if(_pick_One == _compare_With_Rest_Of_The_Elements)
                {
                    continue;
                }
                _sum += arr[_compare_With_Rest_Of_The_Elements];
                if(_sum == x)
                {
                    return true;
                }
                _sum -= arr[_compare_With_Rest_Of_The_Elements];
            }
        }
        return false;
	}

    /* O(n) time complexity, And space complexity O(n) */

    bool hasArrayTwoCandidates(int arr[], int n, int x)
    {
        unordered_set <int> _elements;

        for(int _terverse = 0; _terverse < n; _terverse++)
        {
            if(_elements.find(x - arr[_terverse]) != _elements.end())
            {
                return true;
            }
            _elements.insert(arr[_terverse]);
        }

        return false;
    }

};

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    // Problem link : https://practice.geeksforgeeks.org/problems/key-pair5616/1#

    int _array[] = {50, 42, 35, 1, 5, 30, 99, 7, 78, 9, 32 };
    Solution _test;
    cout << _test.hasArrayTwoCandidates(_array, 11, 42);

    return 0;

}