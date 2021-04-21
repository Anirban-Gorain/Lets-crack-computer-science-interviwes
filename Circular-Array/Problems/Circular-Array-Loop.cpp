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

int _get_Next_Position(vector <int> & nums, int _terverse, int _direction)
{

    int _next_Direction = (nums.at(_terverse) >= 0);

    if (_direction != _next_Direction)
    {
        // In the forward direction backward direction not allowed, In the backward direction forward direction not allowed.
        return -1;
    }

    // Because array is circular.
    int _size_Of_The_Vector = nums.size();
    int _next_Location = ((_terverse + nums.at(_terverse)) % _size_Of_The_Vector);

    if (_next_Location < 0)
    {
        _next_Location = _next_Location + nums.size();
    }

    if (_next_Location == _terverse)
    {
        return -1;
    }

    return _next_Location;
}

bool circularArrayLoop(vector <int> & nums)
{
    int _size_Of_The_Nums = nums.size();

    if(_size_Of_The_Nums <= 1)
    { 
        // Because 1 or 0 element Cycle is not possible.
        return 0;
    }

    int _fast_Pointer;
    int _slow_Pointer;
    int _direction;

    for (int _terverse = 0; _terverse < _size_Of_The_Nums; _terverse++)
    {
        _fast_Pointer = _terverse;
        _slow_Pointer = _terverse;

        // Grater than 0 means forward, Else backward.
        _direction = (nums.at(_terverse) >= 0);

        while (1)
        {
            _slow_Pointer = _get_Next_Position(nums, _slow_Pointer, _direction);
            if (_slow_Pointer == -1)
            {
                break;
            }

            _fast_Pointer = _get_Next_Position(nums, _fast_Pointer, _direction);
            if (_fast_Pointer == -1)
            {
                break;
            }

            _fast_Pointer = _get_Next_Position(nums, _fast_Pointer, _direction);
            if (_fast_Pointer == -1)
            {
                break;
            }

            if(_slow_Pointer == _fast_Pointer)
            {

                return 1;
            }
        }
    }

    return false;
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    vector <int> _data = {-1,-1,-1};
    cout << circularArrayLoop(_data);

    return 0;

}
