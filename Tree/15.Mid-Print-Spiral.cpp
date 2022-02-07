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

// T/C O(n*2^h) and Aux space O(n)

void _print_Spiral(_node *_root)
{
    queue <_node *> _terminate;
    vector <int> _hold;
    int _even_Or_Odd_Level = 1;

    _terminate.push(_root);
    _terminate.push(NULL);

    while(_terminate.size() > 1)
    {
        _node *_curr = _terminate.front();
        _terminate.pop();

        if(_curr ->_left != NULL)
            _terminate.push(_curr->_left);
        if(_curr ->_right != NULL)
            _terminate.push(_curr->_right);

        _hold.push_back(_curr->_key);

        if(_terminate.front() == NULL)
        {
            _terminate.pop();
            _terminate.push(NULL);
            
            if((_even_Or_Odd_Level & 1))
            {
                int _n = _hold.size();
                for(int _i = 0; _i < _n; _i++)
                {
                    cout << _hold[_i] << " ";
                }
            }
            else
            {
                int _n = _hold.size();
                for(int _i = _n-1; _i >= 0; _i--)
                {
                    cout << _hold[_i] << " ";
                }
            }

            _hold.clear();
            _even_Or_Odd_Level++;
        }
    }
}

// T/C O(n) and Aux space O(n)

struct _l_Node
{
    _l_Node *_next;

    int _key;

    _l_Node(int _elem)
    {
        _next = NULL;
        _key = _elem;
    }
};

void _print_Spiral2(_node *_root)
{
    queue <_node *> _terminate;

    bool _reverse = true;

    _l_Node *_main_Head = NULL;
    _l_Node *_main_Tail = NULL;
    _l_Node *_temp_Head = NULL;
    _l_Node *_temp_Tail = NULL;

    _terminate.push(_root);
    _terminate.push(NULL);

    while(_terminate.size() > 1)
    {
        _node *_curr = _terminate.front();
        _terminate.pop();

        if(_temp_Head == NULL)
        {
            _temp_Head = new _l_Node(_curr->_key);
            _temp_Tail = _temp_Head;
        }
        else if(_reverse)
        {
            _temp_Tail->_next = new _l_Node(_curr->_key);
            _temp_Tail = _temp_Tail->_next;
        }
        else
        {
            _l_Node *_temp = new _l_Node(_curr->_key);
            _temp->_next = _temp_Head;
            _temp_Head = _temp;
        }
       
        if(_curr ->_left != NULL)
            _terminate.push(_curr->_left);

        if(_curr ->_right != NULL)
            _terminate.push(_curr->_right);

        if(_terminate.front() == NULL)
        {
            if(_main_Head == NULL)
            {  
                _main_Head = _temp_Head;
                _main_Tail = _main_Head;
            }
            else
            {
                _main_Tail->_next = _temp_Head;
                _main_Tail = _temp_Tail;
            }

            _temp_Head = _temp_Tail = NULL;
            
            _terminate.pop();
            _terminate.push(NULL);
            _reverse = !_reverse; 
        }
    }

    while(_main_Head != NULL)
    {
        cout << (_main_Head->_key) << " ";
        _main_Head = _main_Head->_next;
    }  
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    	_node *_root=new _node(1);
        _root->_left=new _node(2);
        _root->_right=new _node(3);
        _root->_left->_left=new _node(4);
        _root->_left->_right=new _node(5);
        _root->_right->_left=new _node(6);
        _root->_right->_right=new _node(7);

    _print_Spiral2(_root);

    return 0;

}