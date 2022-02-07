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

void _iterative_Traverse(_node *_root)
{
    stack <_node *> _state;

    while(_root != NULL)
    {
        while(_root != NULL)
        {
            _state.push(_root);

            cout << _root->_key << " ";
            _root = _root->_left;
        }

        _root = _state.top()->_right;
        _state.pop();

        if(_root == NULL && _state.empty() != true)
        {
            _root = _state.top()->_right;
            _state.pop();
        }
    }
}

// T/C O(n) and Aux space O(h)

void _iterative_Traverse_Sol_2(_node *_root)
{
    stack <_node*> _state;

    _state.push(_root);

    while(_state.empty() != true)
    {
        _node *_temp = _state.top();

        cout << _temp->_key << " ";
        _state.pop();

        if(_temp->_right != NULL)
            _state.push(_temp->_right);

        if(_temp->_left != NULL)
            _state.push(_temp->_left);

    }
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    _node* _root = new _node(10);
    _root->_left = new _node(20);
    _root->_right = new _node(30);
    _root->_left->_left = new _node(40);
    _root->_left->_left->_left = new _node(70);
    _root->_left->_right = new _node(50);
    _root->_right->_left = new _node(60);
    _root->_left->_left->_right = new _node(80);

    _iterative_Traverse_Sol_2(_root);

    return 0;

}