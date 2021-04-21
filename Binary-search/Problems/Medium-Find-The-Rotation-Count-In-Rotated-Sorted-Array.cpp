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

class Solution
{
    public:	

	int findKRotation(int arr[], int n)
    {
        if(n == -1)
        {
            return -1;
        }

	    int _start, _end, _mid, _pre, _nxt;

        _start = 0;
        _end = n - 1;

        while (_start < _end)
        {
            _mid = _start - (_start - _end) / 2;
            _pre = (_mid + n - 1) % n;
            _nxt = (_mid + 1) % n;

            if(arr[_mid] < arr[_nxt] && arr[_mid] < arr[_pre])
            {
                return _mid;
            }
            else if(!(arr[_mid] < arr[n-1]))
            {
                _start = _mid + 1;
            }
            else if(!(arr[_mid] > arr[0]))
            {
                _end = _mid - 1;
            }
            else if(arr[_mid] > arr[0] && arr[_mid] < arr[n-1])
            {
                _end = _mid - 1;
            }
        }

        return 0;
	}
};

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    Solution _test;
    int _elements[] = {10, 12, 15, 24, 27, 29 ,33, 39 ,47, 49 ,59, 66 ,72, 74, 78, 81 ,91, 96, 98, 108, 116, 2, 8};

    cout << _test.findKRotation(_elements, 23);

    return 0;

}