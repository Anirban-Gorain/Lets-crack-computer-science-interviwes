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

// O(n log(n)) solution.

int _count_Distinct_Element_Sol_1(int _elements[], int _size_Of_Elements)
{
    int _index = 0;
    int _hold_Current_Element;
    bool _is_Starting = true;

    // Sorting the _element, O(n log(n)).

    sort(_elements, _elements + _size_Of_Elements);

    int _count_Of_Distinct_Element = 0;

    for (int _index = 0; _index < _size_Of_Elements; _index++)
    {
        if (_hold_Current_Element == _elements[_index] && _is_Starting != true)
        {
            continue;
        }

        _hold_Current_Element = _elements[_index];
        _count_Of_Distinct_Element++;

        _is_Starting = false;   
    }

    return _count_Of_Distinct_Element;
}

// O(n) time complexity, Space complexity O(n) because in worst case we ant to store n array's elements.

int _count_Distinct_Element_Sol_2(int _elements[], int _size_Of_Elements)
{
    unordered_set <int> _unique_Store(_elements, _elements + _size_Of_Elements);

    // for(int _index = 0; _index < _size_Of_Elements; _index++)
    // {
    //     _unique_Store.insert(_elements[_index]);
    // }

    int _count = _unique_Store.size();

    return _count;
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    /*
    
        Question no 1.

        Given a Array of elements, Find the cout of distinct element ?

        T1 : _array[] = {1, 2, 3, 4, 5, 6} => O/P 6.
        T2 : _array[] = {10, 17, 32, 10, 35, 17, 35, 96, 100, 102, 100} => O/P 7.
    
    */

    int _elements[] = {10, 17, 32, 10, 35, 17, 35, 96, 100, 102, 100};
    int _size_Of_Elements = sizeof(_elements)/sizeof(_elements[0]);

    cout << _count_Distinct_Element_Sol_2(_elements, _size_Of_Elements);

    return 0;

}