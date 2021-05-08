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

// Solution 1 time complexity and space complexity

int _first_Negative_In_Every_Window_Naive()
{
    int _no_Of_Test_Case;
    cin >> _no_Of_Test_Case;

    int _no_Of_Elements;
    int *_elements;
    int _window_Size;
    int _start;
    int _end;
    bool _flag;

    while (_no_Of_Test_Case)
    {
        // Taking array input.

        cin >> _no_Of_Elements;
        _elements = new int[_no_Of_Elements];
        for(int _blocks = 0; _blocks < _no_Of_Elements; _blocks++)
        {
            cin >> *(_elements + _blocks);
        }
        cin >> _window_Size;

        _start = 0;
        _end = _window_Size - 1;

        // Main logic.

        while(_end < _no_Of_Elements)
        {
            _flag = true;

            // Checking in each window.

            for (int _from = _start; _from <= _end; _from++)
            {
                if(_elements[_from] < 0)
                {
                    cout << _elements[_from] << " ";
                    _flag = false;
                    break;
                }
            }
            if(_flag == true)
            {
                cout << "0 ";
            }
            _start++;
            _end++;
        }

        cout << endl;
        delete[] _elements;
        _no_Of_Test_Case--;
    }

    return 0;
}

int _first_Negative_In_Every_Window_Efficient ()
{
    int _test_Case;
    cin >> _test_Case;

    int *_elements;
    int _no_Of_Elements;
    int _window_Size;
    int _start_Window;
    int _end_Window;
    list <int> _result;

    // For test case.

    while(_test_Case)
    {
        // Taking the array elements.

        cin >> _no_Of_Elements;
        _elements = new int[_no_Of_Elements];
        for(int _terverse = 0; _terverse < _no_Of_Elements; _terverse++)
        {
            cin >> *(_elements + _terverse);
        }

        // Taking the window size.
        cin >> _window_Size;

        // Main code.

        _start_Window = _end_Window = 0;
    
        while (_end_Window < _no_Of_Elements)
        {
            if((_end_Window - _start_Window + 1) < _window_Size)
            {
                if(*(_elements + _end_Window) < 0)
                {
                    _result.push_back(*(_elements + _end_Window));
                }
                _end_Window++;
            }
            else if((_end_Window - _start_Window + 1) == _window_Size)
            {
                if(*(_elements + _end_Window) < 0)
                {
                    _result.push_back(*(_elements + _end_Window));
                }

                if(_result.size() != 0)
                {
                    cout << _result.front() << " ";
                    if(*(_elements + _start_Window) == _result.front())
                    {
                        _result.pop_front();
                    }
                }
                else
                {
                    cout << "0 ";
                }


                _start_Window++;
                _end_Window++;
            }
        }

        _result.clear();
        delete [] _elements;        
        cout << "\n";

        _test_Case--;
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

    _first_Negative_In_Every_Window_Efficient();

    return 0;
}