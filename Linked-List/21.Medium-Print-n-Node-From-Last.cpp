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

struct _node
{
    int _data;
    _node *_ref;

    _node(int _data)
    {
        this -> _data = _data;
        _ref = NULL;
    }
};

// T/C O(2n) and Aux space O(1)

int _find_n_From_Last_Naive(_node *_head, int _n)
{
    int _count = 0;

    // Counting no of nodes.

    for(_node *_it = _head; _it != NULL; _it = _it->_ref)
    {
        _count++;
    }

    // Invalid case.

    if(_n > _count)
        return -1;

    // To be print.

    int _print = _count-_n+1;

    for(; _print > 1; _print--) _head = _head->_ref;

    return (_head->_data);
}

// T/C O(n) and Aux space O(1)

int _find_n_From_Last(_node *_head, int _n)
{
    if(_head == NULL)
        return -1;

    _node *_fast = _head;

    for(int _i = 0; _i < _n-1; _i++)
    {
        _fast=_fast->_ref;
    }

    _node *_second = _head;

    while(_fast->_ref != NULL)
    {
        _fast = _fast->_ref;
        _second = _second->_ref;
    }

    return (_second->_data);
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    _node *_head = new _node(10);
    _head->_ref = new _node(80);
    _head->_ref->_ref = new _node(11);
    _head->_ref->_ref->_ref = new _node(12);

    cout << _find_n_From_Last(_head, 2);

    return 0;

}