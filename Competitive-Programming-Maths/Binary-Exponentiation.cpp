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
#define ONLINE_JUDGE -1
#define deb(_x) cout << #_x << " = " << _x << endl;
#define loop(_x, _s ,_n) for(int _x = _s; _x < _n; ++ _x)

void _fio(void)
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    /* 
    
        Calculate power of a given in O(log(n)) T/C.

        How,

        Q1) 2^8 [When intermidiate or first power is Even].

        Naive -> Iterate 8 times and multiply ans by 2.

        Efficient -> 2^8 => (2^2)^4 => (4^2)^2 => (16^2)^1 => 256

        Q2) 2^12 [When intermidiate or first power is Odd].

        Naive -> Same.

        Efficient -> (2^2)^6 => (4^2)^3 => 16*16^2 => 16*256
    
    */

    int _base; int _n; int _ans = 1;

    while(_n>0)
    {
        // To handle odd power.

        if(_n%2)
            _ans = _ans*_base /* % MOD */;

        // Simple even power.

        _ans = _base*_base /* % MOD */;

        // Dividing power by 2.

        _n>>=1;
    }

    return 0;

}