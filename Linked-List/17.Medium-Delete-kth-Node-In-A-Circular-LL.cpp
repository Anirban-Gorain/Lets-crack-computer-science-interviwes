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
    int _data;

    _node *_pre;
    _node *_nxt;

    _node(int _data)
    {
        this->_data = _data;

        _pre=NULL;
        _nxt=NULL;
    }
};

_node *_delete_Kth_Node_From_A_CLL(_node *_head, int _k)
{
    // Assuming _k <= no of element in CLL.

    if(_head == NULL)
        return NULL;
    else if(_head->_nxt == _head)
    {
        delete _head;
        return NULL;
    }

    if(_k == 1)
    {
        _node *_after_Head = _head->_nxt;

        swap(_head->_data, _after_Head->_data);

        _head->_nxt=_after_Head->_nxt;

        delete _after_Head;
        return _head;
    }
    else
    {
        // Worst case.

        _node *_curr = _head; int _i = 0;

        while(_i < (_k-2))
        {
            _curr=_curr->_nxt;
            _i++;
        }

        _node *_to_Be_Delete = _curr->_nxt;

        _curr->_nxt = _to_Be_Delete->_nxt;

        delete _to_Be_Delete;
    }

    return _head;
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    // Defining a CLL.

    _node *_head = new _node(10);
    _head->_nxt = new _node(20); 
    _head->_nxt->_nxt = new _node(30); 
    _head->_nxt->_nxt->_nxt = new _node(40); 
    _head->_nxt->_nxt->_nxt->_nxt=_head;

    cout << _head->_data << "->";
    for(_node *_curr=_head->_nxt; _curr!=_head; _curr=_curr->_nxt)
        cout << _curr->_data << "->";

    // Deleteing First node.

    _head = _delete_Kth_Node_From_A_CLL(_head, 1); cout << '\n';

    cout << _head->_data << "->";
    for(_node *_curr=_head->_nxt; _curr!=_head; _curr=_curr->_nxt)
        cout << _curr->_data << "->";

    // Deleteing First node.

    _head = _delete_Kth_Node_From_A_CLL(_head, 2); cout << '\n';

    cout << _head->_data << "->";
    for(_node *_curr=_head->_nxt; _curr!=_head; _curr=_curr->_nxt)
        cout << _curr->_data << "->";

    // Deleteing First node.

    _head = _delete_Kth_Node_From_A_CLL(_head, 1); cout << '\n';

    cout << _head->_data << "->";
    for(_node *_curr=_head->_nxt; _curr!=_head; _curr=_curr->_nxt)
        cout << _curr->_data << "->";

    // Deleteing First node.

    _head = _delete_Kth_Node_From_A_CLL(_head, 1); cout << '\n';

    cout << _head << "->";

    return 0;

}