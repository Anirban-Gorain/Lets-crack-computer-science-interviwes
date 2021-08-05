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

void _bubble_Sort(vector<int> &_nums)
{
    int _n = _nums.size();

    for(int _i = 1; _i < _n; _i++)
    {
        bool _swapped = false;

        for(int _j = 0; _j < _n-1; _j++)
        {
            if(_nums[_j] > _nums[_j+1])
            {
                swap(_nums[_j], _nums[_j+1]);
                _swapped = true;
            }

            if(_swapped == false)
                break;
        }
    }
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    vector<int> _nums = {10, 8, 7, 2};

    _bubble_Sort(_nums);

    loop(_i, 0, _nums.size())
    {
        cout << _nums[_i] << " ";
    }

    return 0;

}