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

// T/C O(n^2) and Aux space O()

int _root_To_Leaf(_node *_root, int _leaf, unordered_map <int, int> &_burn_Value)
{
    if(_root == NULL)
        return -1;

    int _elem = _root->_key;

    if(_leaf == _elem)
    {
        _burn_Value.insert({_elem, 0});
        return 0;
    }
    
    int _prev_Burn_Value;

    _prev_Burn_Value = _root_To_Leaf(_root->_left, _leaf, _burn_Value);

    if(_prev_Burn_Value != -1)
    {
        _burn_Value.insert({_elem, _prev_Burn_Value + 1});
        return _prev_Burn_Value + 1;
    }

    _prev_Burn_Value = _root_To_Leaf(_root->_right, _leaf, _burn_Value);

    if(_prev_Burn_Value != -1)
    {
        _burn_Value.insert({_elem, _prev_Burn_Value + 1});
        return _prev_Burn_Value + 1;
    }

    return -1;
}

int _height(_node *_root)
{
    if(_root == NULL)
        return 0;

    int _left_Height = _height(_root->_left);
    int _right_Height = _height(_root->_right);

    return max(_left_Height, _right_Height) + 1;
}

void _terverse(_node *_root, unordered_map <int, int> &_burn_Value, int &_res)
{
    if(_root == NULL)
    {
        return;
    }

    _node *_sub_Left = _root->_left, *_sub_Right = _root->_right;

    if(_sub_Left != NULL && _burn_Value.find(_sub_Left->_key) == _burn_Value.end())
    {
        int _temp = _height(_sub_Left);
        int _current_Burn_Value = _burn_Value.find(_root->_key)->second;
        _res = max(_res, _temp+_current_Burn_Value);
    }
    else
        _terverse(_sub_Left, _burn_Value, _res);

    if(_sub_Right != NULL && _burn_Value.find(_sub_Right->_key) == _burn_Value.end())
    {
        int _temp = _height(_sub_Right);
        int _current_Burn_Value = _burn_Value.find(_root->_key)->second;
        _res = max(_res, _temp+_current_Burn_Value);
    }
    else
        _terverse(_sub_Right, _burn_Value, _res);
}

int _driver(_node *_root, int _leaf)
{
    if(_root == NULL)
        return -1;

    unordered_map <int, int> _burn_Value;

    _root_To_Leaf(_root, _leaf, _burn_Value);

    if(_burn_Value.size() == 0)
        return -1;

    int _res = 0;

    _terverse(_root, _burn_Value, _res);

    return _res;
}

// From gfg

struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};

int res=0;
int burnTime(Node *root, int leaf, int &dist){
    if(root==NULL)return 0;
    if(root->key==leaf){dist=0;return 1;}
    int ldist=-1,rdist=-1;
    int lh=burnTime(root->left,leaf,ldist);
    int rh=burnTime(root->right,leaf,rdist);
    
    if(ldist!=-1){
       dist=ldist+1;
       res=max(res,dist+rh);
    }
    else if(rdist!=-1){
        dist=rdist+1;
        res=max(res,dist+lh);
    }
    return max(lh,rh)+1;
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    _node *_root = new _node(10);
    // _root->_left = new _node(20);
    // _root->_left->_right = new _node(30);
    // _root->_left->_right->_right = new _node(40);
    // _root->_left->_right->_left = new _node(50);
    // _root->_left->_right->_left->_right = new _node(60);
    // _root->_left->_right->_left->_right->_right = new _node(70);
    // _root->_left->_right->_left->_right->_right->_right = new _node(80);
    // _root->_left->_right->_left->_right->_right->_right->_right = new _node(90);

    _root->_right = new _node(20);
    _root->_right->_left = new _node(70);
    _root->_right->_right = new _node(30);
    _root->_right->_right->_left = new _node(80);
    _root->_right->_right->_right = new _node(40);
    _root->_right->_right->_right->_right = new _node(50);
    _root->_right->_right->_right->_right->_left = new _node(90);
    _root->_right->_right->_right->_right->_right = new _node(60);

    unordered_map <int, int> _burn_Value;
    int _leaf = 100;

    cout << _driver(_root, _leaf);

    return 0;

}