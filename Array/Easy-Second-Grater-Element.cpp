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

int _largest(int _arr[], int _size)
{
    int _max = INT_MIN;

    for(int _ind = 0; _ind < _size; _ind++)
    {
        if(_max < _arr[_ind])
            _max = _arr[_ind];
    }
    return _max;
}

int _second_Largest(int _arr[], int _size, int _largest)
{
    int _sec_Largest_Elem;
    int _is_All_Same = 0;

    for(int _i = 0; _i < _size; _i++)
    {
        if(_arr[_i] < _largest)
        {
            _sec_Largest_Elem = _arr[_i];
            _is_All_Same = 1;
            break;
        }
    }

    if(_is_All_Same == 0)
        return -1;

    for(int _i = 0; _i < _size; _i++)
    {
        if(_arr[_i] > _sec_Largest_Elem && _arr[_i] != _largest)
        {
            _sec_Largest_Elem = _arr[_i];
        }
    }

    return _sec_Largest_Elem;
}

int _second_Largest(int _arr[], int _size, int _largest)
{
    /*

        a1 a2 a3 a4 a5 a6 .... ai

        a[i] > a[largest] => res = largest, largest = i.
        a[i] == a[largest] => ignore.
        a[i] < a[largest]
        {
            res == -1 => res = i.
            a[i] <= a[res] => ignore.
            a[i] > arr[res] => res = i.
        }
        
    */
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    int _arr[] = {10, 10, 10};

    int _temp = _largest(_arr, 3);
    cout << _second_Largest(_arr, 3, _temp);

    return 0;

}