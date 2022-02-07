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

int _max_Width(_node *_root)
{
    int _max_Width = INT_MIN;

    queue <_node *> _lines_Terminatore;

    _lines_Terminatore.push(_root);
    _lines_Terminatore.push(NULL);

    int _cnt = 0;

    while(_lines_Terminatore.size() > 1)
    {
        _node *_curr = _lines_Terminatore.front();
        _lines_Terminatore.pop();

        _cnt++;

        if(_curr == NULL)
        {
            _max_Width = max(_max_Width, _cnt-1);
            _cnt = 0;

            _lines_Terminatore.push(NULL);

            continue;
        }

        if(_curr->_left != NULL)
            _lines_Terminatore.push(_curr->_left);

        if(_curr->_right != NULL)
            _lines_Terminatore.push(_curr->_right);
    }

    return _max_Width;
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    _node *_root = new _node(10);
	_root->_left = new _node(8);
	_root->_right = new _node(2);
	_root->_left->_left = new _node(4);
	_root->_left->_right = new _node(4);
	_root->_right->_left = new _node(1);
	_root->_right->_right = new _node(1);
	_root->_right->_left->_left = new _node(1);

    cout << _max_Width(_root);

    return 0;

}