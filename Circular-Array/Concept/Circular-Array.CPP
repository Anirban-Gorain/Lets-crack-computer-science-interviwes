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

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    // Circular array are implement using basic arrays.

    /* 
    
        Problem : Let A, B, C, D are four peoples now we have to print all the names of the persons, But from where we will start
        we have print in circular manner. It can back circular, For Ex, Start = B, B, A, D, C. Or can front circular, For Ex, Start 
        = B, B, C, D, A.

    */

    // Input

    string _names[8];

    for(int _index = 0; _index < 8; _index++)
    {

        cin >> _names[_index];

    }

    // Circular traversal

    int _from_Where = 3;
    int _capacity = 8;

    for(int _circular_Tarverse = _from_Where; _circular_Tarverse < _from_Where + _capacity; _circular_Tarverse++)
    {

        cout << _names[_circular_Tarverse % _capacity] << endl;

    }

    return 0;

}