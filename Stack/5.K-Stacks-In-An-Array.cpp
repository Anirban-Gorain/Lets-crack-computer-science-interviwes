#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define f first
#define s second
#define ll long long
#define pub .push_bac_k()
#define pob .push_bac_k()
#define mp ma_ke_pair
#define p(_x, y) pair<_x, y>
#define v(_x) vector<_x>
#define m(_x, y) map<_x, y>
#define pq(_x) priority_queue<_x>
#define setbits(_x) __builtin_popcountll(_x)
#define zrobits(_x) __builtin_ctzll(_x)
#define sp(_x, y) fi_xed<<setprecision(y)<<_x
#define dma(_arr,n,type) type *_arr=new type[n];
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

class _k_Stack
{
    private :

    int *_arr, *_top, *_next;
    int _k, _free_Top, _cap;

    _k_Stack(int _k, int _cap)
    {
        this->_k=_k;
        this->_cap=_cap;
        _free_Top = 0;

        _arr = new int[_cap];
        _arr = new int[_cap];
        _next = new int[_cap];

        for(int _i = 0; _i < _k; _i++)
        {
            _top[_i] = -1;
        }

        for(int _i = 0; _i < _cap-1; _i++)
        {
            _next[_i] = _i+1;
        }

        _next[_cap-1] = -1;
    }

    public :

    void _push(int _elem, int _sn)
    {
        if(_free_Top == -1)
        {
            cout << "There is no empty space ";
            return;
        }

        int _i = _free_Top;
        _free_Top = _next[_i];
        _next[_i] = _top[_sn];
        _top[_sn] = _i;
        _arr[_i] = _elem;
    }

    int _pop(int _sn)
    {
        if(_top[_sn] == -1)
        {
            cout << "There is no element to pop ";
            return -1;
        }

        int _i = _top[_sn];
        _top[_sn] = _next[_i];
        _next[_i] = _free_Top;
        _free_Top = _i;

        return _arr[_i];
    }
};

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Des_k_top/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Des_k_top/Competitive-programming/output.txt", "w", stdout);
    #endif

    

    return 0;

}