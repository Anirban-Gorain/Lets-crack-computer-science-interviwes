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
        this->_data=_data;
        _ref=NULL;
    }
};

void _insert_At_Begin(_node **_head, _node *_created)
{
    _created->_ref = *_head;
    *_head = _created;
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    _node *_head = new _node(10);
    _head->_ref = new _node(20);
    _head->_ref->_ref = new _node(30);

    _node *_cur = _head;

    while(_cur != NULL)
    {
        cout << _cur->_data << " ";
        _cur = _cur->_ref;
    }

    _insert_At_Begin(&_head, new _node(40));

    _cur = _head;

    cout << '\n';
    
    while(_cur != NULL)
    {
        cout << _cur->_data << " ";
        _cur = _cur->_ref;
    }

    return 0;

}