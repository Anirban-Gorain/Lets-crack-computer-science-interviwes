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

// Time complexity O(n) and space complexity O(1).

int maximumSumSubarray(int K, vector<int> &Arr , int N){
        
    // code here
    
    vector <int> _prefix_Sum;
    
    for(int _access = 0, _sum = 0; _access < N; _access++)
    {
        _sum += Arr[_access];
        _prefix_Sum.push_back(_sum);
    }
    
    int _max_Sum = _prefix_Sum[K - 1];
    int _previous_Index = 0;
    
    for(int _terverse = K; _terverse < N; _terverse++, _previous_Index++)
    {
        if(_max_Sum < (_prefix_Sum[_terverse] - _prefix_Sum[_previous_Index]))
        {
            _max_Sum = _prefix_Sum[_terverse] - _prefix_Sum[_previous_Index];
        }
    }
    
    return _max_Sum;
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    // Problem link : https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

    return 0;

}