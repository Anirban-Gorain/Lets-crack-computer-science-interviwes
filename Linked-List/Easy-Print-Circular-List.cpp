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

    _node *_nxt;

    _node(int _data)
    {
        this->_data=_data;

        _nxt=NULL;
    }
};

// T/C O(n) and Aux space O(1)

void _print_CLL(_node *_head)
{
    _node *_temp=_head;

    if(_head == NULL)
        cout << "No element fount \n";
    else if(_temp->_nxt == _head)
    {
        cout << _head->_data;
        return;
    }

    cout << _temp->_data << "\n";
    _temp=_temp->_nxt;

    while (_temp != _head)
    {
        cout << _temp->_data << "\n";

        _temp=_temp->_nxt;
    }

    // In the same way we can implement using for loop.
}

// Standard implementation.
// T/C O(n) and Aux space O(1)

void _print_CLL_Stan(_node *_head)
{
    if(_head==NULL)
        return;

    _node *_temp=_head;

    do
    {
        cout << _temp->_data << "\n";
        _temp=_temp->_nxt;

    }while (_temp != _head);
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