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

void _preorder_Terverse(_node *_root)
{
    if(_root != NULL)
    {
        cout << _root->_key << " ";
        _preorder_Terverse(_root->_left);
        _preorder_Terverse(_root->_right);
    }
}

int _binary_Search(vector <int> &_in, int _key)
{
    int _low = 0;
    int _high = _in.size()-1;

    while(_low <= _high)
    {
        int _mid = (_low + _high) / 2;

        if(_in[_mid] == _key)
            return _mid;
        else if(_in[_mid] > _key)
            _high = _mid - 1;
        else
            _high  = _low + 1;
    }

    return -1;
}

// T/C O(n^2) and Aux space O(h*n)

void _convert_To_Binary_Tree(_node **_root, vector <int> _inorder, vector <int> _preorder)
{
    // Base

    if(_inorder.size() == 0 || _preorder.size() == 0)
    {
        return;
    }

    int _node_Element = _preorder[0];

    (*_root) = new _node(_node_Element);

    // I and P for left call

    int _ind = _binary_Search(_inorder, _node_Element);

    vector <int> _new_Inorder(_inorder.begin(), _inorder.begin() + _ind);
    int _size = _new_Inorder.size();
    vector <int> _new_Preorder(_preorder.begin() + 1, _preorder.begin() + _size + 1);

    _convert_To_Binary_Tree(&((*_root)->_left), _new_Inorder, _new_Preorder);

    // I and P for right call
    
    _new_Inorder.clear();
    _new_Preorder.clear();

    _new_Inorder.insert(_new_Inorder.begin(), _inorder.begin()  + _ind + 1, _inorder.end());
    _new_Preorder.insert(_new_Preorder.begin(), _preorder.begin()  + _ind + 1, _preorder.end());

    _convert_To_Binary_Tree(&((*_root)->_right), _new_Inorder, _new_Preorder);
}

// T/C O(n^) and Aux space O(h)

// From lecture and copy

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    vector <int> _in = {40, 20, 50, 10, 30, 80, 70, 90};
    vector <int> _pre = {10, 20, 40, 50, 30, 70, 80, 90};

    // vector <int> _in = {20, 10, 30};
    // vector <int> _pre = {10, 20, 30};

    _node *_root = NULL;

    _convert_To_Binary_Tree(&_root, _in, _pre);
    _preorder_Terverse(_root);

    return 0;

}