#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define f first
#define s second
#define ll long long
#define pub .push_back()
#define pob .push_back()
#define mp make_pair
#define p(_x, y) pair<_x, y>
#define v(_x) vector<_x>
#define m(_x, y) map<_x, y>
#define pq(_x) priority_queue<_x>
#define setbits(_x) __builtin_popcountll(_x)
#define zrobits(_x) __builtin_ctzll(_x)
#define sp(_x, y) fi_xed<<setprecision(y)<<_x
#define dma(arr,n,type) type *arr=new type[n];
#define w(_x) int _x; while(_x--)
#define sq(_x) _x*_x
#define its(_x) (string) #_x
#define sti(_x) (int) _x
#define fti(_x) (int) _x
#define deb(_x) cout << #_x << " = " << _x << endl;
#define loop(_x, _s ,_n) for(int _x = _s; _x < _n; ++ _x)

void _fio(void)
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}

// Merge function  of "Merge-sort". Merge sort is a stable sorting algorithm.

/* 

    We will be given 3 identifier, _low, _mid, _high.

    _low to _mid is Sorted.
    (_mid+1) to _high is Sorted.

    We need to create two aux arrays, _t1 & _t2 and have to store first sorted part, then
    have to store second sorted part then, Finally need to marge these two arrays, which
    we have already solved, "Merge two sorted array".

*/

/* 

    How to calculate time complexity of recursive function --

    Ans : Sum-of-work-done-by-at-every-level * The-height-of-the-recursive-tree. [See merge
    sort analysis by Sandeep sir]

*/

// T/C O(n*log(n)) and Aux space O(n)

void _merge_Sort(int _arr[], int _l, int _r)
{
    if(_l<_r)
    {
        int _mid=_l-(_l-_r)/2;

        _merge_Sort(_arr, _l, _mid);
        _merge_Sort(_arr, _mid+1, _r);

        // _merge(_arr, _l, _mid, _r); Have to define
    }
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    

    return 0;

}