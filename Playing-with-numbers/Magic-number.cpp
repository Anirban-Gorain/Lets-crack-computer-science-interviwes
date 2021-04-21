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
// #define ONLINE_JUDGE       -1
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

int _magic_Number(int _number)
{
    int _digit_Sum_Store = _digit_Sum(_number);

    if ((_digit_Sum_Store == 1) || (_digit_Sum_Store % 10 == 0))
    {
        return 1;
    }
    else if(_number < 10)
    {
        return 0;
    }
    
    return _magic_Number(_digit_Sum_Store);
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    int _number;
    cin >> _number;
    cout << _magic_Number(_number);

    // Constant solution.

    /* 
    
        Any number divisible by 9 when the sum of the digits is 9, So if we divide the given number
        and if we get remainder as 1 that mean the sum of digit is 10, Because (10 - 1) % 9 == 0.
        So if the _given_Number % 9 == 1 then "magic-number".
    
    */

    return 0;

}