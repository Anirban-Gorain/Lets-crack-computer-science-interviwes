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

int _max_In_A_Tree(_node *_root)
{
    if(_root == NULL)
        return INT_MIN;

    int _left_Max = _max_In_A_Tree(_root->_left);
    int _right_Max = _max_In_A_Tree(_root->_right);

    int _max_Of_L_And_R = max(_left_Max, _right_Max);

    int _node_Key = _root->_key;

    int _with_Root = max(_max_Of_L_And_R, _node_Key);

    return _with_Root;
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

    cout << _max_In_A_Tree(_root);

    return 0;
}