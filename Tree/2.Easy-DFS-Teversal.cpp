#include<iostream>

using namespace std;

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

void _in_Order(_node *_root)
{
    if(_root != NULL)
    {
        _in_Order(_root->_left);
        cout << _root->_key << " ";
        _in_Order(_root->_right);
    }
}

void _preorder(_node *_root)
{
    if(_root != NULL)
    {
        cout << _root->_key << " ";
        _preorder(_root->_left);
        _preorder(_root->_right);
    }
}

void _postorder(_node *_root)
{
    if(_root != NULL)
    {
        _postorder(_root->_left);
        _postorder(_root->_right);
        cout << _root->_key << " ";
    }
}

int main(void)
{
    _node *_root = new _node(10);
    _root->_left = new _node(20);
    _root->_right = new _node(30);
    _root->_right->_right = new _node(60);
    _root->_left->_left = new _node(40);
    _root->_left->_right = new _node(50);
    _root->_left->_right->_left = new _node(70);
    _root->_left->_right->_right = new _node(80);

    _in_Order(_root);
    cout << "\n";
    _preorder(_root);
    cout << "\n";
    _postorder(_root);
}