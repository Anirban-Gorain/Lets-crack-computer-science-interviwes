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

// T/C O(n) and Aux space O(n)

void _print_Line_By_Line(_node *_root)
{
    queue<_node *> _tem_Store;

    _tem_Store.push(_root);
    _tem_Store.push(NULL);

    while(_tem_Store.size() > 1)
    {
        _node *_hold = _tem_Store.front();

        _tem_Store.pop();

        if(_hold == NULL)
        {
            cout << "\n";
            _tem_Store.push(NULL);

            continue;
        }

        cout << (_hold->_key) << " ";

        if(_hold->_left != NULL)
            _tem_Store.push(_hold->_left);

        if(_hold->_right != NULL)
            _tem_Store.push(_hold->_right);
    }
}

// Using two for loops

// T/C O(n) and Aux space O(n)

void _print_Line_By_Line_Sol2(_node *_root)
{
    queue <_node *> _temp;

    _temp.push(_root);

    while(_temp.empty() ==  false)
    {
        int _cnt = _temp.size();

        for(int _i = 1; _i <= _cnt; _i++)
        {
            _node *_hold = _temp.front();

            _temp.pop();

            cout << (_hold->_key) << " ";

            if(_hold->_left != NULL)
                _temp.push(_hold->_left);

            if(_hold->_right != NULL)
                _temp.push(_hold->_right);
        }

        cout << "\n";
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
    _root->_left->_right = new _node(60);

    _print_Line_By_Line_Sol2(_root);

    return 0;

}