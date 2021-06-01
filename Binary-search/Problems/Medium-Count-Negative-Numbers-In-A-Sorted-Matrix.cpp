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

class Solution
{
    public :
    int countNegatives(vector<vector<int>> & grid)
    {
        int _col_Size = grid.size();
        int _row_Size = grid[0].size();

        _row = 0;
        _col = _row_Size - 1;
        int _count_Negatives = 0;

        while(_row != _col_Size && _col != -1)
        {
            if(grid[_row][_col] < 0)
            {
                _count_Negatives += (_col_Size - _row);
                _col--;
            }
            else if(grid[_row][_col] > 0)
            {
                _row++;
            }
        }

        return _count_Negatives;
    }
};

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    

    return 0;

}