#include<bits/stdc++.h>
#include<iostream>

using namespace std;

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

    _node(int _k)
    {
        _key = _k;

        _left = _right = NULL;
    }
};

void _print_Level(_node *_root)
{
    if(_root == NULL)
        return;
    
    queue<_node *> _nodes;

    _nodes.push(_root);

    while(_nodes.empty() == false)
    {
        _node *_curr = _nodes.front();
        _nodes.pop();

        cout << _curr->_key << " ";

        if(_curr->_left != NULL)
            _nodes.push(_curr->_left);

        if(_curr->_right != NULL)
            _nodes.push(_curr->_right);
    }
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
    _root->_right->_right = new _node(60);
    _root->_left->_left = new _node(40);
    _root->_left->_right = new _node(50);
    _root->_left->_right->_left = new _node(70);
    _root->_left->_right->_right = new _node(80);

    _print_Level(_root);

    return 0;

}