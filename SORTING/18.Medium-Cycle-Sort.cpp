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

// T/C O(n^2) and Aux space O(1); Repeatting elements are not allowed 

void _cycle_Sort_Distinct(int *_arr, int _n)
{
    for(int _cycle_Start = 0; _cycle_Start < _n-1; _cycle_Start++)
    {
        int _item = _arr[_cycle_Start];
        int _pos = _cycle_Start;

        for(int _i = _cycle_Start+1; _i < _n; _i++)
        {
            if(_item > _arr[_i])
            {
                _pos++;
            }
        }

        swap(_item, _arr[_pos]);


        // It will finish each cycle.

        while(_pos != _cycle_Start)
        {
            _pos = _cycle_Start;

            for(int _i = _cycle_Start+1; _i < _n; _i++)
            {
                if(_item > _arr[_i])
                {
                    _pos++;
                }
            }

            swap(_arr[_pos], _item);
        }
    }
}

// T/C O(n^2) and Aux space O(1); Repeatting elements are allowed. 

void _cycle_Sort(int *_arr, int _n)
{
    for(int _cycle_Start = 0; _cycle_Start < _n-1; _cycle_Start++)
    {
        int _item = _arr[_cycle_Start];
        int _pos = _cycle_Start;

        for(int _i = _cycle_Start+1; _i < _n; _i++)
        {
            if(_item > _arr[_i])
            {
                _pos++;
            }
        }

        swap(_item, _arr[_pos]);


        // It will finish each cycle.

        while(_pos != _cycle_Start)
        {
            _pos = _cycle_Start;

            for(int _i = _cycle_Start+1; _i < _n; _i++)
            {
                if(_item > _arr[_i])
                {
                    _pos++;
                }
            }

            while((_pos < _n) && (_item == _arr[_pos]))
                _pos++;

            swap(_arr[_pos], _item);
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
    
        1) This algorithm needs minimum memory write.
        2) In place & not stable.
        3) Useful to solve question like Find min swaps required to sort.
    
    */

    int _arr[] = {6, 5, 6, 3, 1, 5};

    _cycle_Sort(_arr, sizeof(_arr)/4);

    for(int _x : _arr)
    {
        cout << _x << " ";
    }

    return 0;

}