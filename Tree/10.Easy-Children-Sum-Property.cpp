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

// Much less optimal than the follwing sol.

bool _is_Valid = true;

int _check_Children_Sum(_node *_root)
{
	if(((_root->_left) == NULL) && ((_root->_right) == NULL))
	{
		int _common = _root->_key;

		return _common;
	}

	int _lv = 0, _rv = 0;

	if((_root->_left) != NULL)
		_lv = _check_Children_Sum(_root->_left);

	if((_root->_right) != NULL)
		_rv = _check_Children_Sum(_root->_right);

	
	if((_lv + _rv) != (_root->_key))
	{
		_is_Valid = false;
	}
	
	return (_root->_key);
}

bool _check_Children_Sum_Efficient(_node *_root)
{
	if(_root == NULL)
		return 1;

	if(((_root->_left) == NULL) &&  ((_root->_right) == NULL))
		return 1;

	int _sum = 0;

	if((_root ->_left) != NULL)
		_sum += (_root->_left->_key);

	if((_root ->_right) != NULL)
		_sum += (_root->_right->_key);

	bool _is_True = ((_sum == (_root->_key)) && _check_Children_Sum_Efficient(_root->_left) && _check_Children_Sum(_root->_right));

	return _is_True;
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
	

	_check_Children_Sum_Efficient(_root);

	if(_is_Valid)
		cout << "Yes ";
	else
		cout << "Not ";

	return 0;

}