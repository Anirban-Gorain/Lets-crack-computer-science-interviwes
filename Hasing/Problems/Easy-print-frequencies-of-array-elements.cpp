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

// Time complexity O(n log(n)), Space complexity O(n).

int _array_Frequency_Sol_1(int _elements[], int _no_Of_Elements)
{
    int _count;
    int _hold;

    // Sorting the element.

    sort(_elements, _elements + _no_Of_Elements);

    int _index_Deep;
    for(int _index = 0; _index < _no_Of_Elements; _index++)
    {
        _count = 0;
        _hold = _elements[_index];

        for(_index_Deep = _index; _index_Deep < _no_Of_Elements; _index_Deep++)
        {
            if(_hold != _elements[_index_Deep])
            {
                _index = _index_Deep - 1;
                break;
            }

            _count++;
        }

        cout << _hold << " -> " << _count << endl;

        // If entire array contain same element.

        if(_index_Deep == _no_Of_Elements)
        {

            break;
        }
    }

    return 0;
}

// O(n) time complexity, O(n) space complexity.

int _array_Frequency_Sol_2(int _elements[], int _no_Of_Elements)
{
    unordered_map <int, int> _record;

    for(int _index = 0; _index < _no_Of_Elements; _index++)
    {
        _record[_elements[_index]]++;
    }

    // This printing doesn't maitain any order. To achieve that we can traverse thea array again and based on that order use array element as key we can do.

    for(auto _iterator = _record.begin(); _iterator != _record.end(); _iterator++)
    {
        cout << _iterator->first << " -> " << _iterator->second << endl;
    }

    return 0;
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    /* 
    
        Print frequencies of array elements.

        EX,

        _array[] = {10, 12, 65, 10, 95, 85, 62, 85, 62};

        O/P,

        10 -> 2
        12 -> 1
        65 -> 1
        95 -> 1
        85 -> 2
        62 -> 2
    
    */

   int _elements[] = {10, 17, 32, 10, 35, 17, 35, 96, 100, 102, 100, 100};
    int _size_Of_Elements = sizeof(_elements)/sizeof(_elements[0]);

    cout << _array_Frequency_Sol_2(_elements, _size_Of_Elements);

    return 0;

}