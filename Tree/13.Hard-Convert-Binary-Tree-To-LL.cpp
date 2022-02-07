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

_node * _convert_Btree_To_LL(_node *_root, char _left_Or_Right = 'i')
{
    if(_root != NULL)
    {
        _node *_left_LL = _convert_Btree_To_LL(_root->_left, 'l');

        _root->_left = _left_LL;

        if(_root->_left != NULL)
            _root->_left->_right = _root;

        _node *_right_LL = _convert_Btree_To_LL(_root->_right, 'r');

        _root->_right = _right_LL;

        if(_root->_right != NULL)
            _root->_right->_left = _root;

        if(_left_LL == NULL || _right_LL == NULL)
        {
            return _root;
        }
        else if(_left_Or_Right == 'l')
        {
            return _right_LL;
        }
        else if(_left_Or_Right == 'r')
        {
            return _left_LL;
        }
        else
        {
            _node *_curr = _root;

            while(_curr->_left != NULL)
            {
                _curr = _curr->_left;
            }

            return _curr;
        }
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

    _node *_root = new _node(10);
    _root->_left = new _node(20);
    _root->_right = new _node(30);
    _root->_left->_left = new _node(40);
    _root->_left->_right = new _node(50);
    _root->_right->_left = new _node(60);
    _root->_right->_right = new _node(70);

    _root = _convert_Btree_To_LL(_root);

    _node *_curr = _root;

    while(_curr->_right != NULL)
    {
        cout << _curr->_key << " ";
        _curr = _curr->_right;
    }

    cout << "\n";

    while(_curr->_left != NULL)
    {
        cout << _curr->_key << " ";
        _curr = _curr->_left;
    }
    

    return 0;

}