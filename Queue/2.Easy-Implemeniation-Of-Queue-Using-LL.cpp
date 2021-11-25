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
    _node *_ref;

    _node(int _elem)
    {
        _data = _elem;
        _ref = NULL;
    }
};

class _queue
{
    _node *_front;
    _node *_rare;
    int _data;
    int _size;

    public:

    _queue()
    {
        _front = _rare = NULL;
        _size = 0;
    }

    void _push(int _elem)
    {
        _node *_temp = new _node(_elem);

        if(_front == NULL)
        {
            _front = _rare = _temp;
        }
        else
        {
            _rare->_ref = _temp;
            _rare = _temp;
        }

        _size++;
    }

    void _deque()
    {
        if(_size == 0)
        {
            return;
        }

        _node *_temp = _front->_ref;

        delete _front;

        _front = _temp;

        if(_size == 1)
        {
            _front = _rare = NULL;
        }

        _size--;
    }

    int _get_Size()
    {
        return _size;
    }

    bool _is_Empty()
    {
        return (_size == 0 ? 1 : 0);
    }

    int _get_Front()
    {
        if(_is_Empty())
        {
            cout << "Not element is present ";
            return  -1;
        }

        return (_front->_data);
    }

    int _get_Rare()
    {
        if(_is_Empty())
        {
            cout << "Not element is present ";
            return  -1;
        }

        return (_rare->_data);
    }
};

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    

    return 0;

}