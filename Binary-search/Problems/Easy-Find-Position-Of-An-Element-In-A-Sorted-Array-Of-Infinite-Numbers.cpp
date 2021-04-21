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

int _search_In_Infinite(int _arr[], int _key)
{
    int _start, _end, _mid;

    _start = 0;
    _end = 1;
    
    // Finding the end.

    while (_arr[_end] < _key)
    {
        _start = _end;
        _end *= 2;
    }

    while (_start <= _end)
    {
        _mid = _start - (_start - _end) / 2;

        if(_arr[_mid] == _key)
        {
            return _mid;
        }
        else if(_key > _arr[_mid])
        {
            _start = _mid + 1;
        }
        else if(_key < _arr[_mid])
        {
            _end = _mid - 1;
        }
    }
    
    return -1;
    
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    /* 

        if(_arr[0] < 0)
        {
            _end = (-_arr[0]) + _key;
        }
        else
        {
            _end = _key;
        }

        This approach will not work because of if _key is more the for infinet array mid will too high but if the array size is less than _mid the will produce sementation fault error.

        ** And for this approach if the key to high then we are getting the same problrm.
    
    */

    int _end = 141515;
    
    int _arr[_end + 1];

    for(int _index = 0; _index < _end + 1; _index++)
    {
        cin >> _arr[_index];
    }

    cout << _search_In_Infinite(_arr, 999999);

    return 0;

}