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
    int _key;

    _node *_left;
    _node *_right;

    _node(int _key)
    {
        _left = _right = NULL;
        this->_key = _key;
    }
};

void _serialize_Binary_Tree(_node *_root, vector <int> &_req_String)
{
    // Using preorder

    if(_root == NULL)
    {
        _req_String.push_back(-1); // Assuming -1 is not present in input.
        return;
    }

    _req_String.push_back(_root->_key);

    _serialize_Binary_Tree(_root->_left, _req_String);
    _serialize_Binary_Tree(_root->_right, _req_String);
}

int _ind = 0;

void _serialize_Binary_Tree_String(_node **_root, vector <int> &_binary_String)
{
    (*_root) = new _node(_binary_String[_ind]);

    _ind++;

    if(_binary_String[_ind] != -1)
        _serialize_Binary_Tree_String(& (*_root)->_left, _binary_String);

    _ind++;

    if(_binary_String[_ind] != -1)
        _serialize_Binary_Tree_String(& (*_root)->_right, _binary_String);
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