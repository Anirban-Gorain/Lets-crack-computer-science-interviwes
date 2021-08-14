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

int _cdp(vector <int> _chocolates, int _m, vector <int> _picked_Chocolates)
{
    if(_picked_Chocolates.size() == _m)
    {
        int _max = *max_element(_picked_Chocolates.begin(), _picked_Chocolates.end());
        int _min = *min_element(_picked_Chocolates.begin(), _picked_Chocolates.end());

        // cout << _max - _min  << " " << _min << " " <<_max << " " << "\n";

        return _max - _min;
    }

    int _min = INT_MAX;

    for(int _i = 0; _i < _chocolates.size(); _i++)
    {
        int _tem = _chocolates[_i];
        _chocolates.erase(_chocolates.begin()+_i);

        _picked_Chocolates.push_back(_tem);

        int _r = _cdp(_chocolates, _m, _picked_Chocolates);
        _min = min(_min, _r);

        _picked_Chocolates.pop_back();
        _chocolates.insert(_chocolates.begin() + _i, _tem);        
    }

    return _min;
}

// T/C O(n*log(n)) and Aux space O(1)

int _chocolate_D_P(vector <int> _chocolate, int _m)
{
    int _n = _chocolate.size();

    if(_m > _n)
        return -1;

    sort(_chocolate.begin(), _chocolate.end());

    int _res = INT_MAX;

    for(int _i = 0; (_m+_i-1) < _n; _i++)
    {
        _res = min(_res, _chocolate[_m+_i-1] - _chocolate[_i]);
    }

    return _res;
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    v(int) _chocolate = {7, 3, 2, 4, 9, 12, 56};

    cout << _chocolate_D_P(_chocolate, 3);

    return 0;

}