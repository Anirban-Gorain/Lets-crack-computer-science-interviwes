#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define f first
#define s second
#define ll long long
#define pub .push_back()
#define pob .push_back()
#define mp make_pair
#define p(x, y) pair<x, y>
#define v(x) vector<x>
#define m(x, y) map<x, y>
#define pq(x) priority_queue<x>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define sp(x, y) fixed<<setprecision(y)<<x
#define dma(arr,n,type) type *arr=new type[n];
#define w(x) int x; while(x--)
#define sq(x) x*x
#define its(x) (string) #x
#define sti(x) (int) x
#define fti(x) (int) x
#define ONLINE_JUDGE -1
#define deb(x) cout << #x << " = " << x << endl;

void _fio(void)
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}

int _delete(int _arr[], int _size, int _elem)
{
    // Searching

    int _pos = -1;

    for(int _ind = 0; _ind < _size; _ind++)
    {
        if(_arr[_ind] == _elem)
        {
            _pos = _ind;
            break;
        }
    }

    if(_pos == -1)
        return _size;

    // Deleting

    for(int _ind = _pos; _pos < _size  - 1; _pos++)
    {
        _arr[_pos] = _arr[_pos + 1];
    }

    return --_size;
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    int _arr[10] = {1, 2, 3, 4, 5, 6, 7};

    _delete(_arr, 10, 3);

    for(int _ind = 0; _ind < 10; _ind++)
    {
        cout << _arr[_ind] << " ";
    }

    return 0;

}