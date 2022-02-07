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

// T/C O(n) and Aux space O(h)

bool _find_Path(_node *_root, int _key, vector <int> &_path)
{
    if(_root == NULL)
        return false;

    int _root_Key = _root->_key;

    if(_key == _root_Key)
    {
        _path.push_back(_root_Key);
        return true;
    }

    bool _res = _find_Path(_root->_left, _key, _path);

    if(_res == true)
    {
        _path.push_back(_root_Key);
        return true;
    }

    _res = _find_Path(_root->_right, _key, _path);

    if(_res == true)
    {
        _path.push_back(_root_Key);
        return true;
    }

    return false;
}

// T/C O(n) and Aux space O(h)

_node *_find_LCA(_node *_root, int _n1, int _n2)
{
    int _root_Value = _root->_key;

    if(_root_Value == _n1 || _root_Value == _n2)
    {
        return _root;
    }
    else if(_root == NULL)
    {
        return NULL;
    }

    _node *_hold1, *_hold2;

    _hold1 = _find_LCA(_root->_left, _n1, _n2);
    _hold2 = _find_LCA(_root->_right, _n1, _n2);

    if(_hold1 != NULL && _hold2 != NULL)
        return _root;
    else if(_hold1 != NULL)
    {
        return _hold1;
    }
    else if(_hold2 != NULL)
    {
        return _hold2;
    }

    return NULL;
}


int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    _node *_root = new _node(1);
    _root->_left = new _node(2);
    _root->_right = new _node(3);
    _root->_left->_left = new _node(4);
    _root->_left->_right = new _node(5);
    _root->_right->_left = new _node(7);
    _root->_right->_right = new _node(8);

    vector <int> _path1;
    vector <int> _path2;
    int _n1 = 2;
    int _n2 = 5;

    _find_Path(_root, _n1, _path1);
    _find_Path(_root, _n2, _path2);

    // Now we have to find common value from left side. Sol 1 taking extra space to store the path.

    return 0;

}