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

class _reverse_Queue
{
    public:

    queue <int> _reverse_Recursive(queue <int> _reduced)
    {
        if(_reduced.size() == 1)
        {
            return _reduced;
        }

        int _store_Front = _reduced.front();

        _reduced.pop();
        queue <int> _store_Reversed = _reverse_Recursive(_reduced);

        _store_Reversed.push(_store_Front);

        return _store_Reversed;
    }

    queue <int> _reverse_Iterative(queue <int> _queue)
    {
        stack <int> _reverse;

        while(!_queue.empty())
        {
            int _store_Front = _queue.front();
            _queue.pop();
            _reverse.push(_store_Front);
        }

        while(!_reverse.empty())
        {
            int _store_Top = _reverse.top();
            _reverse.pop();
            _queue.push(_store_Top);
        }

        return _queue;
    }
};

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    queue <int> _pass;

    _pass.push(10);
    _pass.push(20);
    _pass.push(30);
    _pass.push(40);
    _pass.push(50);
    _pass.push(60);

    _reverse_Queue _obj;

    _pass = _obj._reverse_Recursive(_pass);
    queue <int> _cpy = _pass;

    while(!_pass.empty())
    {
        cout << _pass.front() << " ";
        _pass.pop();
    }

    cout << "\n";

    _pass = _obj._reverse_Iterative(_cpy);

    while(!_pass.empty())
    {
        cout << _pass.front() << " ";
        _pass.pop();
    }

    return 0;

}