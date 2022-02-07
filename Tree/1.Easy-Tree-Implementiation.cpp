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

int main()
{
    _node *_root = new _node(10);
    _root->_left = new _node(20);
    _root->_right = new _node(30);
    _root->_left->_left = new _node(40);

    return 0;
}