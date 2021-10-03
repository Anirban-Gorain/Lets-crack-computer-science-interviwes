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

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    {

        // Creating the nodes

        _node *_head = new _node(100);
        _node *_link_1 = new _node(500);
        _node *_link_2 = new _node(20);

        // Linking the nodes

        _head -> _ref = _link_1;
        _link_1 -> _ref = _link_2;

    }

    // After creating all of the nodes and linking _link_1, _link_2 doesn't needed _by using _head can be accessed all of these connected nodes.
    // Short implementation

    _node *_head = new _node(100);
    _head -> _ref = new _node(500);
    _head -> _ref ->_ref = new _node(20);

    return 0;

}