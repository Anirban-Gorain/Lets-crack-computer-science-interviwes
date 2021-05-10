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

// Time complexity O(n) and space complexity O(1).

int _insert(int _arr[], int _size, int _last_I, int _pos, int _elem)
{
    if(_size == _last_I + 1)
    {
        return _size;
    }

    for(int _ind = _last_I; _last_I >= _pos; _last_I--)
    {
        _arr[_last_I + 1] = _arr[_last_I];
    }

    _arr[_pos] = _elem;

    return _size + 1;
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    int _arr[10] = {1, 2, 3, 4, 5, 6, 7};

    _insert(_arr, 10, 6, 7, 100);

    for(int _ind = 0; _ind < 10; _ind++)
    {
        cout << _arr[_ind] << " ";
    }

    return 0;

}