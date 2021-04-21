#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define f                  first
#define s                  second
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

class Solution
{
	public :

    int lenOfLongSubarr(int A[],  int N, int K) 
    {
        unordered_map <int, int> _prefix_Sum_And_Their_Frequency;
        int _max_Length = 0;
        int _prefix_Sum = 0;

        for(int _terverse = 0; _terverse < N; _terverse++)
        {
            _prefix_Sum += A[_terverse];

            if(_prefix_Sum == K)
            {
                if(_terverse + 1 > _max_Length)
                {
                    _max_Length = _terverse + 1;
                }
            }

            if(_prefix_Sum_And_Their_Frequency.find(_prefix_Sum - K) != _prefix_Sum_And_Their_Frequency.end())
            {
                int _previous_Index = _prefix_Sum_And_Their_Frequency.find(_prefix_Sum - K) -> second;
                
                if(_terverse - _previous_Index > _max_Length)
                {
                    _max_Length = _terverse - _previous_Index;
                }
            }

            if(_prefix_Sum_And_Their_Frequency.find(_prefix_Sum) == _prefix_Sum_And_Their_Frequency.end())
            {
                _prefix_Sum_And_Their_Frequency[_prefix_Sum] = _terverse;
            }
        }

        return _max_Length;
    }

    int longestCommonSum(bool arr1[], bool arr2[], int n)
	{
		int * _subtraction = new int [n];

        for(int _terverse = 0; _terverse < n; _terverse++)
        {
            _subtraction[_terverse] = arr1[_terverse] - arr2[_terverse];
        }

        // After find the subtraction just we have to find the longest sub array with sum zero.

        return this->lenOfLongSubarr(_subtraction, n, 0);
        
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