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

    _node * _pre;
    _node * _nxt;

    _node(int _data)
    {
        this->_data=_data;

        _pre=NULL;
        _nxt=NULL;
    }
};

_node *_insert_End(_node *_head, int _data)
{
    _node *_temp= new _node(_data);

    if(_head ==NULL)
        return _temp;

    _node *_it=_head;

    for(; _it->_nxt != NULL; _it=_it->_nxt);

    _it->_nxt=_temp;
    _temp->_pre=_it;

    return _head;
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    _node * _head=new _node(5);
    _node * _temp1=new _node(6);
    _node * _temp2=new _node(7);

    _head->_nxt=_temp1;
    _temp1->_pre=_head;

    _temp1->_nxt=_temp2;
    _temp2->_pre=_temp1;

    // cout << "A";

    for(_node *_it=_head; _it != NULL; _it=_it->_nxt)
        cout << _it->_data << " ";
    
    _head=_insert_End(_head, 23);
    _head=_insert_End(_head, 27);


    cout << "\n";

    for(_node *_it=_head; _it != NULL; _it=_it->_nxt)
        cout << _it->_data << " ";

    return 0;

}