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

// O(n*log(n)) time complexity, space complexity O(1)

class Solution
{

    public:

    bool searchMatrix(vector<vector<int>> & matrix, int target)
    {
        int _row, _result;

        _row = 0;

        while (_row < matrix.size())
        {
            _result = binary_search(matrix[_row].begin(), matrix[_row].end(), target);

            if(_result != 0)
            {
                return true;
            }

           _row++;
        }
        return 0;
    }

    // Linear solution

    bool searchMatrix_e(vector<vector<int>> & matrix, int target)
    {
        int _row, _col;

        _row = 0;
        _col = matrix[_row].size() - 1;

        while (_row != matrix.size() && _col != -1)
        {
            if(matrix[_row][_col] == target)
            {
                return 1;
            }
            else if(matrix[_row][_col] < target)
            {
                _row++;
            }
            else if(matrix[_row][_col] > target)
            {
                _col--;
            }
        }

        return 0;
    }
};


int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    vector<vector<int>> _matrix
    {
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}
    };

    Solution _test;

    cout << _test.searchMatrix_e(_matrix, 16);

    return 0;

}