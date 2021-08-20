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

// i using hoores partition, T/C O(n) & S/C O(1)

void _sort1(vector <int> _arr)
{
    int _i = -1, _j = _arr.size();

    while(1)
    {
        do
        {
            _i++;
        }while(_arr[_i] < 0);

        do
        {
            _j--;
        }while(_arr[_i] >= 0);

        if(_i >= _j)
            break;

        swap(_arr[_i], _arr[_j]);
    }
}

// i using lomuto partition, T/C O(n) & S/C O(1)

void _sort2(vector <int> & _arr)
{
    int _i = -1;

    for(int _j = 0; _j < _arr.size(); _j++)
    {
        if(_arr[_j] < 0)
        {
            _i++;
            swap(_arr[_i], _arr[_j]);
        }
    }
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    /* 
        Variations --

        i) Segregate negative and positive elements.
        ii) Segregate even and odd elements.
        iii) Sort a binary array.

        How to solve --
        
        1) Using "count no of zeros" method. {i, ii, iii}.
        2) Hoores / Lomuto partitioning algo.
    
    */

   vector <int> _arr = {-1, 0, 3, 5, -8, -8, 8, -9, 10};

   _sort2(_arr);

   for(int _e : _arr)
   {
       cout << _e << " ";
   }

    return 0;

}