#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;


/* 

Sort function use to sort and random access container, Random access are those container which gives
direct i'th element access. 

 */

struct _coord
{
    int _x, _y;
    string _name;
};

bool _com_1(_coord _p1, _coord _p2)
{
    return (_p1._x < _p2._x);
}

bool _com_2(_coord _p1, _coord _p2)
{
    return (_p1._y < _p2._y);
}

int main(void)
{

    freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
    freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);

    vector <int> _data = {5, 4, 3, 2, 1};

    // Sorting in ascending order.

    sort(_data.begin(), _data.end());

    for(int _x : _data)
    {
        cout << _x << " ";
    }

    // Sorting decending order.

    /* 
    
        greater <int>() is use to reverse the default order.
    
    */

    sort(_data.begin(), _data.end(), greater <int>());
    cout << endl;

    for(int _x : _data)
    {
        cout << _x << " ";
    }

    // Sort by own order using Comparator-function.

    _coord _arr[] = {{1, 2, "a"}, {5, 9, "b"}, {3, 1, "c"}, {6, 4, "d"}, {3, 5, "e"}};

    /* 
    
        Sorting all the coordinate according to _x axis's increasing order.
    
    */
    
    sort(_arr, _arr + 5, _com_1);
    cout << endl;

    for(_coord _e : _arr)
    {
        cout << _e._x << " " << _e._y << " " << _e._name << ", ";
    }

    sort(_arr, _arr + 5, _com_2);
    cout << endl;

    for(_coord _e : _arr)
    {
        cout << _e._x << " " << _e._y << " " << _e._name << ", ";
    }

    // Internal working of sort() function.

    // T/C : In both worst and avg case takes O(n*log(n)).
    // Uses Introsort : Hybrid of Quick, Heap and Insertion sort.

    return 0;
}