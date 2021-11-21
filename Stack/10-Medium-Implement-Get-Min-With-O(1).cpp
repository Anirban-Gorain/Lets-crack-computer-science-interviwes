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

// T/C O(1) and Aux space O(n)

class _stack
{
    private :

    stack<int> _main;
    stack<int> _aux;

    public :

    void _push(int _x)
    {
        _main.push(_x);

        if(_aux.top() > _main.top())
        {
            _aux.push(_x);
        }
    }

    int _pop()
    {
        int _temp = _main.top();

        _main.pop();

        if(_temp == _aux.top())
            return _aux.top();

        return _temp;
    }
};

// Restricted input [1, infinite].

// T/C O(1) and Aux space O(1)

class _stack2
{
    private:
    
    stack<int> _s;
    int _min;

    public:

    void _push(int _x)
    {
        if(_s.empty() == true)
        {
            _s.push(_x);
        }
        else if(_x <= _min)
        {
            _s.push(_x-_min);
            _min = _x;
        }
        else
        {
            _s.push(_x);
        }
    }

    int _pop()
    {
        int _temp = _s.top();

        if(_temp <= 0)
        {
            int _res = _min;
            _min = _min - _temp;
            
            return _res;
        }
        else
            return _temp;
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