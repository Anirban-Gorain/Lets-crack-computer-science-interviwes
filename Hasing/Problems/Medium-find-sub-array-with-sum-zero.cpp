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

// O(n^2) time complexity and space complexity (1).

int _sub_Array_Sum_Zero(int _array[], int _size)
{
    int _sum;

    for(int _starting = 0; _starting < _size; _starting++)
    {
        _sum = 0;

        for(int _based_Starting = _starting; _based_Starting < _size; _based_Starting++)
        {
            _sum += _array[_based_Starting];

            if(_sum == 0)
            {
                return 1;
            }
        }
    }

    return -1;
}

bool subArrayExists(int arr[], int n)
{
    unordered_set <int> _store_Prefix_Sum;
    int _calculate_Prefix_Sum = 0;
    int _terverse = 0;

    for(_terverse = 0; _terverse < n; _terverse++)
    {
        _calculate_Prefix_Sum += arr[_terverse];

        if(_store_Prefix_Sum.find(_calculate_Prefix_Sum) != _store_Prefix_Sum.end())
        {
            return 1;
        }
        
        if(_calculate_Prefix_Sum == 0)
        {
            return 1;
        }

        _store_Prefix_Sum.insert(_calculate_Prefix_Sum);
    }
    
    return 0;
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    /* 

        Problem link : https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1#

        What is "Prefix sum" ?

            a[] = {1, 2, 3, 4, 5};
            prefix-sum[] = {1, 3, 6, 10, 15};
    
    */


    int _array[] = {1, -3, 3, 4, -1, 6};
    int _size = sizeof(_array)/4;

    cout << _sub_Array_Sum_Zero(_array, _size);

    return 0;

}