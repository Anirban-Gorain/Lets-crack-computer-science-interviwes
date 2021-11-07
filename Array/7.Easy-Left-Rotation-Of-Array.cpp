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
#define loop(x, n) for(int x = 0; x < n; ++ x)

void _fio(void)
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}

void _left_Rotation(int _arr[], int _size)
{
    int _temp = _arr[0];

    for(int _i = 0; _i < (_size - 1); _i++)
    {
        _arr[_i] = _arr[_i + 1];
    }

    _arr[_size - 1] = _temp;
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    int _arr[] = {1, 2, 3, 4, 5};
    _left_Rotation(_arr, 5);

    loop(_i, 5)
    {
        cout << _arr[_i] << " ";
    }

    return 0;

}