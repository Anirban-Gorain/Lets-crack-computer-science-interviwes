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

void _print_kth_Level(_node *_root, int _k)
{
    if(_root != NULL)
    {
        if(_root == NULL)
            return;
        else if(_k == 0)
            cout << _root->_key << " ";
        else
        {
            _print_kth_Level(_root->_left, _k-1);
            _print_kth_Level(_root->_right, _k-1);
        }
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

    _print_kth_Level(_root, 2);

    return 0;

}