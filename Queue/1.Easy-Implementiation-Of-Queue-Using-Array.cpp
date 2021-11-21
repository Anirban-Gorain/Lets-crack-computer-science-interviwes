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

class _queue
{
    int _front = 0;
    int _size = 0;
    int _cap;
    int *_arr;

    public :

    _queue(int _cap)
    {
        this->_cap = _cap;
        _arr = new int[_cap];
    }

    void _enqueue(int _elem)
    {
        if(_is_Full() == true)
            return;

        int _rare = _getrare(); // Next empty block
        _rare = (_rare + 1) % _cap;

        _arr[_rare] = _elem;
        _size++;
    }

    void _dequeue()
    {
        if(_is_Empty() == true)
            return;

        _front = (_front + 1) % _cap;
        _size--;
    }

    int _getfront()
    {
        if(_is_Empty() == true)
        {
            return -1;
        }

        return _front;
    }

    int _getrare()
    {
        if(_is_Empty() == true)
        {
            return -1;
        }

        int _rare = (_rare + _size - 1) % _cap;

        return _rare;
    }

    int _get_Size()
    {
        return _size;
    }

    int _is_Full()
    {
        return (_size == _cap);
    }

    int _is_Empty()
    {
        return (_size == 0);
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