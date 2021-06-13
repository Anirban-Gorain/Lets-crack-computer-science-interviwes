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

const int N = 1e6+10;

int _n;
long long _m;

long long _tress[N];

bool _is_Sufficient_Tree(long long _h)
{

    long long _required_Amount_Of_Wood = 0;

    loop(_i, 0, _n)
    {

        if(_tress[_i] >= _h)
        {
            // Adding wood
            
            _required_Amount_Of_Wood += (_tress[_i] -_h);
        }
    }

    return _required_Amount_Of_Wood >= _m;
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    cin >> _n >> _m;

    loop(_i, 0, _n)
    {
        cin >> _tress[_i];
    }

    long long _low = 0, _high = 1e9, _mid;

    // T T T T T T F F F F F

    while (_low < _high-1)
    {
        _mid =_low +  (_high - _low)/2; 

        if(_is_Sufficient_Tree(_mid))
        {
            _low = _mid;
        }
        else
        {
            _high = _mid - 1;
        }
    }
    
    if(_is_Sufficient_Tree(_high))
    {
        cout << _high;
    }
    else
    {
        cout << _low;
    }

    return 0;

}