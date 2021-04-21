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

// Time complexity O(N) and space complexity O(n).

int countOccurrence(int arr[], int n, int k)
{
    unordered_map <int, int> _element_With_Frequencies;

    for(int _terverse = 0; _terverse < n; _terverse++)
    {
        _element_With_Frequencies[arr[_terverse]]++;
    }

    int _more_Than_N_By_K_Value = n/k;
    int _count = 0;

    for(auto _terverse = _element_With_Frequencies.begin(); _terverse != _element_With_Frequencies.end(); _terverse++)
    {
        if((_terverse -> second) > _more_Than_N_By_K_Value)
        {
            _count++;
        }
    } 

    return _count;
}

// Used-Algorithm : Moore's voting algorithm.

int countOccurrence(int arr[], int n, int k)
{
    
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    return 0;

}