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

int _digit_Sum(int _number)
{
    int _sum = 0;

    while (_number > 0)
    {
        _sum = _sum + (_number % 10);
        _number /= 10;
    }
    return _sum;
}

// Dudeney number. Best case O(1), Worst case O(nlog(n)).

int _dudeney_Number(int _number)
{
    int _cube_Root = cbrt(_number);

    if (_number != (_cube_Root * _cube_Root * _cube_Root))
    {
        return 0;
    }
    
    int _sum_Of_Digits = _digit_Sum(_number);

    return (_cube_Root == _sum_Of_Digits);
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    int _number;
    cin >> _number;
    cout << _dudeney_Number(19683);

    return 0;

}