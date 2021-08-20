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

bool _validity(vector <ll> & _sizes, ll _m, ll _height)
{
    ll _cutted_Wood = 0;

    for(auto _x : _sizes)
    {
        if(_x > _height)
            _cutted_Wood += (_x - _height);
    }

    return (_cutted_Wood >= _m) ? 1 : 0;
}

int _get_Max_Height(vector <ll> & _sizes, ll _m)
{
    // ll _max_Tree_Height = *max_element(_sizes.begin(), _sizes.end());

    ll _low = 1; ll _max = 1e9, _height, _ans;

    while(_low < _max)
    {
        _height = _low - (_low - _max)/2;

        if(_validity(_sizes, _m, _height))
        {
            _ans = _height;
            _low = _height+1;
        }
        else
        {
            _max = _height-1;
        }
    }

    return _ans;
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    ll _n, _m;

    cin >> _n >> _m;

    vector <ll> _sizes(_n);

    for(auto & _x : _sizes)
    {
        cin >> _x;
    }

    ll _tem = _get_Max_Height(_sizes, _m);

    cout << _tem;

    return 0;
}