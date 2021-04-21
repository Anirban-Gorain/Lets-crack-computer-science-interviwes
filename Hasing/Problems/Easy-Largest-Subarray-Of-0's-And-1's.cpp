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

int maxLen(int arr[], int N)
{
    int _calculate_Sum = 0;
    int _max_Sub_Array = 0;

    unordered_map <int, int> _prefix_Sum_And_Their_Index;

    for(int _terverse = 0; _terverse < N; _terverse++)
    {
        _calculate_Sum += (arr[_terverse] == 0 ? -1 : 1);

        if(_calculate_Sum == 0 && (_terverse + 1) > _max_Sub_Array)
        {
            _max_Sub_Array = _terverse + 1;
        }

        if(_prefix_Sum_And_Their_Index.find(_calculate_Sum) != _prefix_Sum_And_Their_Index.end())
        {
            int _cal = _terverse - (_prefix_Sum_And_Their_Index.find(_calculate_Sum) -> second);

            if(_cal > _max_Sub_Array)
            {
                _max_Sub_Array = _cal;
            }
        }


        // if(_prefix_Sum_And_Their_Index.find(_calculate_Sum) == _prefix_Sum_And_Their_Index.end())
        {
            _prefix_Sum_And_Their_Index.insert({_calculate_Sum, _terverse});
        }
    }

    return _max_Sub_Array;
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    // Simple trick to solve this question is consider all zeros as -1.

    int N = 85;
    int A[] = {1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0};

    cout << maxLen(A, N);

    return 0;

}