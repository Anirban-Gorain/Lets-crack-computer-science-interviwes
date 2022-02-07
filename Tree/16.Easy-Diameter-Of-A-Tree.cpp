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

// T/C O(n) and Aux space O(1)

int _max_Diameter = 0;

int _find_Max_Diameter(_node *_root)
{
    if(_root == NULL)
        return 0;

    int _left_Path_Len = _find_Max_Diameter(_root->_left);
    int _right_Path_Len = _find_Max_Diameter(_root->_right);

    int _construct_Diameter = _left_Path_Len + _right_Path_Len + 1;
    _max_Diameter = max(_max_Diameter, _construct_Diameter);

    int _max_Path = max(_left_Path_Len, _right_Path_Len) + 1;

    return _max_Path;
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    _node *_root = new _node(1);
	_root->_left = new _node(2);
	_root->_right = new _node(3);
	_root->_left->_left = new _node(4);
	_root->_left->_right = new _node(5);

    _find_Max_Diameter(_root);

    cout << _max_Diameter;

    return 0;

}