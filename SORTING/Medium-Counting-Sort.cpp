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

// T/C O(n+k) and Aux space O()

void _counting_Sort(int *_arr, int _n, int _k)
{
    // The limitation of this implementation is what we can't sort a object. Reason we are assigning _i.

    // [0, (k-1)]
    int _count[_k];

    memset(_count, 0, sizeof(_count));

    loop(_i, 0, _n)
    {
        _count[_arr[_i]]++;
    }

    int _ind = 0;

    loop(_i, 0, _k)
    {
        loop(_j, 0, _count[_i])
        {
            _arr[_ind] = _i;
            _ind++;
        }
    }
}

// No should be [0, inf] and obj are allowed & stable as well.

// T/C O(n+k) and Aux space O()

void _counting_Sort_General(int _arr[], int _n, int _k)
{
    _k++;
    int _count[_k];

    memset(_count, 0, sizeof(_count));

    // Occurencess of element

    for(int _i = 0; _i < _n; _i++)
    {
        _count[_arr[_i]]++;
    }

    // A particucal _count[_i] is going to contain that there are how many item which are less than or equal _i.

    for(int _i = 1; _i < _k; _i++)
    {
        _count[_i] = _count[_i-1] + _count[_i];
    }

    // Constructing actual sorted array.

    int _output[_n];

    for(int _i = _n-1; _i != -1; _i--)
    {
        _output[_count[_arr[_i]] - 1] = _arr[_i];
        _count[_arr[_i]]--;
    }

    // Copying the _output into _arr.

    for(int _i = 0; _i < _n; _i++)
    {
        _arr[_i] = _output[_i];
    }
}

// No should be between [min, min], +ve, -ve both numbers are allowed and object aswell.
// T/C O(n+k) and Aux space O()

void _counting_Sort_Min_Max(int *_arr, int _n, int _min, int _max)
{
    unordered_map <int, int> _count;

    // This follwing operation doing in order to reduce different conditions when will be calculate a particular key contain how many less than or equal.

    for(int _i = _min; _i <= _max; _i++)
    {
        _count.insert({_i, 0});
    }

    // Frequency.

    for(int _i = 0; _i < _n; _i++)
    {
        (_count.find(_arr[_i]) -> second)++;
    }

    // A particular key is going to contain that there are how many item which are less than or equal _i.

    for(int _i = _min+1; _i <= _max; _i++)
    {
        (_count.find(_i) -> second) = (_count.find(_i-1) -> second) + (_count.find(_i) -> second);
    }

    // Constructing the sorted array.

    int _output[_n];

    for(int _i = 0; _i < _n; _i++)
    {
        _output[(_count.find(_arr[_i]) -> second)-1] = _arr[_i];
        (_count.find(_arr[_i]) -> second)--;
    }

    for(int _i = 0; _i < _n; _i++)
    {
        _arr[_i] = _output[_i];
    }
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    int _arr[] = {1, 5, 4, 2, 0, 3, 5, 1, 3, 2};

   _counting_Sort_General(_arr, sizeof(_arr)/4, 5);

    for(int _x : _arr)
    {
        cout << _x << " ";
    }

    cout << "\n\n";

    // For [min, max].

    int _arr2[] = {-100, -99, -100, -88, -77, -64, -96, -90};

   _counting_Sort_Min_Max(_arr2, sizeof(_arr2)/4, -100, -64);

    for(int _x : _arr2)
    {
        cout << _x << " ";
    }

    return 0;

}