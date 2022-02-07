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

int _height(_node *_root)
{
    if(_root != NULL)
    {
        int _left_Subtree_Height = _height(_root->_left);
        int _right_Subtree_Height = _height(_root->_right);
        int _max = max(_left_Subtree_Height, _right_Subtree_Height);
        int _includeding_Current_Node = _max + 1;

        return _includeding_Current_Node;
    }

    return 0;
}

void _fio(void)
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

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

    cout << _height(_root);

    return 0;
}