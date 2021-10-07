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

#define _size 3

struct _unrolled_LL
{
    _unrolled_LL *_nxt;

    int _arr[_size];
};

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    /* 
    
        Unrolled linked list is an improved version of simple linked list. Inside a LL presents another LL or array. A standard is no of inner nodes or array blocks inside outer node will be at max sqrt(n).

        Efficiency,

        node1 -> node2 -> node3 -> NULL :: No of pointers is 3, No of data is 3. Efficiency (3/6) = 1/2 = 50%.

        node1 (3 blocks) -> node2 (3 blocks) -> node3 (3 blocks) -> NULL :: No of pointesr is 3, No of data is 3. Efficiency (9/12) = 3/4 = 75%.

        Threasehold (_size/2) + 1 elements we can put in each node. The reason is, if we use all the array blocks in a node after sometime if we need to put some β elements in that node where no free blocks are available now, Then we have to take shift by β elements. The amount of work we have to do O(nodes * _size).
    
    */

    return 0;

}