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

// Fourmule, To check the sub matrix of size pxq along with row and column wise check we can do,

/* 
    for(i = 1-(n-1))
    {
        row = p * (_current_Row / p) + i / p);
        column = q (current_Column / q) + i % q;

        arr[row][column];
    }
*/

class Solution
{
    public:

    void solveSudoku(vector<vector<char>> & board)
    {
        _solve(board);
    }

    bool _solve(vector<vector<char>> & board)
    {
        for(int _row = 0; _row < 9; _row++)
        {
            for(int _column = 0; _column < 9; _column++)
            {
                if(board[_row][_column] == '.')
                {
                    for(char _possibilities = '1'; _possibilities <= '9'; _possibilities++)
                    {
                        if(_is_Valid(_possibilities, _row, _column, board) == true)
                        {
                            board[_row][_column] = _possibilities;

                            if(_solve(board) == true)
                            {
                                return true;
                            }
                            else
                            {
                                board[_row][_column] = '.';
                            }
                        }
                    }

                    return false;
                }
            }
        }

        return true;
    }

    bool _is_Valid(char _possibilities ,int _row, int _column, vector<vector<char>> & board)
    {
        for(int _value = 0; _value < 9; _value++)
        {
            if(board[_row][_value] == _possibilities)
                return false;

            if(board[_value][_column] == _possibilities)
                return false;

            if(board[3 * (_row / 3) + _value / 3][3 * (_column / 3) + _value % 3] == _possibilities)
                return false;
        }

        return true;
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