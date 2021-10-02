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

// This sol still need O(n) stack space for sorting a decreasing array.

void _quick_Sort(int _arr[], int _l, int _h)
{
    _begin:

    if(_l < _h)
    {
        int _p;

        // _p = _partition(_arr, _l, _r); [ Assuming using lomuto partition ].

        _quick_Sort(_arr, _l, _p - 1);
        _l = _p+1;

        goto _begin;    
    }
}

// Highly optimized quick sort, Worst case stack space O(log(n)) when array divded into two parts, When array was sorted reverse order or all elements was same, it was giving stack space of O(n) but now it will take O(1) only.

void quickSort(int arr[], int low, int high)
{
    _start:

    if (low < high)
    {

        int pi;
        // pi = partition(arr, low, high);
 
        // Which part is smaller recur for that part, then again recur after iteration (Updating the parameters) but in decresing order recur won't satisfy that is way it is optimized.

        if (pi - low < high - pi)
        {
            quickSort(arr, low, pi - 1);
            low = pi + 1;
        }
 
        // Else recur for right part
        else
        {
            quickSort(arr, pi + 1, high);
            high = pi - 1;
        }

        goto _start;
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

        Basically there are two things first, Tail recursive (No operation with return value of function call so to achieve required goals use additional parameter, https://www.youtube.com/watch?v=Wpkh5YSqwqg) and second thing is, Tail elimination is  tail recursive cal we can remove which is known as tail call elemination it reduce space complexity.
    
        In Quick sort the purpose of Tail-eliminenation is to reduce the worst case space complexity from O(n) to log(n).

        Ex of tail call elemination,

        void _print(int _n)
        {
            _begin:

            if(_n == 0)
                return;

                cout << _n << " ";
            
            _n--;

            goto _begin;
        }

        Output : 10 9 8 7 6 5 4 3 2 1

        But we can't solve print 1 to n using it.

    */

    return 0;

}