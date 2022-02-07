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
        this->_key = _key;

        _left=_right=NULL;
    }
};

void _print_Left_View(_node *_root, char _side)
{
    if(_root == NULL)
        return;

    if(_side == 'L')
        cout << _root->_key << " ";
    
    _print_Left_View(_root->_left, 'L');
    _print_Left_View(_root->_right, 'R');
}

// Using property of Preorder [Root Left Right]

int _max_Level = 0;

void _print_Left_View(_node *_root, int _level)
{
    if(_root == NULL)
        return;
    else
    {
        if(_max_Level < _level)
        {
            cout << (_root->_key) << " ";
        }

        _max_Level = _level;

        _print_Left_View(_root->_left, _max_Level + 1);
        _print_Left_View(_root->_right, _max_Level);
    }
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    _node *_root = new _node(80);
    _root->_left = new _node(70);
    _root->_right = new _node(30);
    _root->_left->_left = new _node(90);
    _root->_left->_right = new _node(10);

    _print_Left_View(_root, 'L');

    return 0;

}