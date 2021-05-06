#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define f                  first
#define s                  second
#define ll                 long long
#define pub                .push_back()
#define pob                .push_back()
#define mp                 make_pair
#define p(x, y)            pair<x, y>
#define v(x)               vector<x>
#define m(x, y)            map<x, y>
#define pq(x)              priority_queue<x>
#define setbits(x)         __builtin_popcountll(x)
#define zrobits(x)         __builtin_ctzll(x)
#define sp(x, y)           fixed<<setprecision(y)<<x
#define dma(arr,n,type)    type *arr=new type[n];
#define w(x)               int x; while(x--)
#define sq(x)              x*x
#define its(x)             (string) #x
#define sti(x)             (int) x
#define fti(x)             (int) x
#define ONLINE_JUDGE       -1
#define deb(x)             cout << #x << " = " << x << endl;

void _fio(void)
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}

int _add(int _a, int _b, int _c = 0, int _p = 1, int _res = 0)
{
	if(_a == 0 && _b == 0 && _c == 0)
	{
		return _res;
	}

	if((_a & 1) == 0 && (_b & 1) == 0 && _c ==0)
	{
		return _add(_a >> 1, _b >> 1, _c, _p << 1, _res);
	}
	else if((((_a & 1) == 0 && (_b & 1) == 1) || ((_a & 1) == 1 && (_b & 1) == 0)) && _c == 0)
	{
		_res = _res | _p;
		return _add(_a >> 1, _b >> 1, _c, _p << 1, _res);
	}
	else if((_a & 1) == 1 && (_b & 1) == 1 && _c == 0)
	{
		_c = _p << 1;
		return _add(_a >> 1, _b >> 1, _c, _p << 1, _res);
	}
	else if((_a & 1) == 1 && (_b & 1) == 1 && (_c & _p) != 0)
	{
		_res = _res | _p;
		_c = _c << 1;
		return _add(_a >> 1, _b >> 1, _c, _p << 1, _res);
	}
	else if((((_a & 1) == 0 && (_b & 1) == 1) || ((_a & 1) == 1 && (_b & 1) == 0)) && (_c & _p) != 0)
	{
		_c = _c << 1;
		return _add(_a >> 1, _b >> 1, _c, _p << 1, _res);
	}
	else if((_a & 1) == 0 && (_b & 1) == 0 && (_c & _p) != 0)
	{
		_res = _res | _c;
		_c = 0;
		return _add(_a >> 1, _b >> 1, _c, _p << 1, _res);
	}
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    cout << _add(1215498732, 112513659);

    return 0;

}