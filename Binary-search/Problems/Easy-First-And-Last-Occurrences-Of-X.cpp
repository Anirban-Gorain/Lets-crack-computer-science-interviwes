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

// Time complexity is O(k log(n)), Ans space complexity is almost (2).

vector <int> find_brute(int arr[], int n , int x )
{
    vector <int> _result;

    if(n == 1)
    {
        if(arr[0] == x)
        {
            _result.push_back(0);
            _result.push_back(0);
        }
        else
        {
            _result.push_back(-1);
            _result.push_back(-1);
        }
        return _result;
    }

    int _start, _end, _left_Occ, _right_Occ, _mid_Point;

    _start = 0;
    _end = n;
    _right_Occ = _left_Occ = -1;

    while (_start <= _end)
    {
        _mid_Point = _start - (_start - _end) / 2;

        if(arr[_mid_Point] == x)
        {
            _right_Occ = _left_Occ = _mid_Point;

            // Let this down-ward operatios takes k times.

            while(arr[_right_Occ] == x)
            {
                _right_Occ++;
            }

            while(arr[_left_Occ] == x)
            {
                _left_Occ--;
            }

            _right_Occ--;
            _left_Occ++;

            break;
        }
        else if(x > arr[_mid_Point])
        {
            _start = _mid_Point + 1;
        }
        else if(x < arr[_mid_Point])
        {
            _end = _mid_Point - 1;
        }
    }
    
    _result.push_back(_left_Occ);
    _result.push_back(_right_Occ);
}

// Optimization, Time complexity O(n) and space complexity O(2).

vector <int> find(int arr[], int n , int x )
{
    int _start, _end, _mid, _left_Most, _right_Most;

    _start = 0;
    _end = n;
    _right_Most = _left_Most = -1;

    // Finding the first occurrance.

    while (_start <= _end)
    {
        _mid = _start - (_start-_end) / 2;

        if(arr[_mid] == x)
        {
            _right_Most = _mid;
            _end = _mid - 1;
        }
        else if(x > arr[_mid])
        {
            _start = _mid + 1;
        }
        else if(x < arr[_mid])
        {
            _end = _mid - 1;
        }
    }

    // Finding the last occurrance.

    _start = 0;
    _end = n;

    while (_start <= _end)
    {
        _mid = _start - (_start-_end) / 2;

        if(arr[_mid] == x)
        {
            _left_Most = _mid;
            _start = _mid + 1;
        }
        else if(x > arr[_mid])
        {
            _start = _mid + 1;
        }
        else if(x < arr[_mid])
        {
            _end = _mid - 1;
        }
    }
    
    vector <int> _result;

    _result.push_back(_right_Most);
    _result.push_back(_left_Most);

    return _result;
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    vector <int> _result;
    int _elements[] = {1, 3, 5, 5, 5, 5, 7, 123, 125};

    _result = find(_elements, 9, 7);
    cout << _result[0] << " " << _result[1];

    return 0;

}