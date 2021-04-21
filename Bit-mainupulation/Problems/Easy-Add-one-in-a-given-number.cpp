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

int _add_One_Method_One(int _data)
{
    return -(~_data);
}

int _add_One_Method_Two(int _data)
{
    int _bit_Position = 1;

    while(_data & _bit_Position)
    {
        _data = _data ^ _bit_Position;
        _bit_Position = _bit_Position << 1;
    }

    _data = _data ^ _bit_Position;

    return _data;
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    /* 

        Method 1:

        From the right most unset bit change all bits till rightmost.

            Ex,

            5 => 101
            6 => 110

        Method 2:

        Using bitwise complements operator.

            Ex,

            5 => ~5 => -6 => -(-6) => 6.
            -6 => ~(-6) =>> 5 >> -(5) => -5.

    */

    cout << _add_One_Method_One(10) << endl;
    cout << _add_One_Method_Two(20);
    

    return 0;

}