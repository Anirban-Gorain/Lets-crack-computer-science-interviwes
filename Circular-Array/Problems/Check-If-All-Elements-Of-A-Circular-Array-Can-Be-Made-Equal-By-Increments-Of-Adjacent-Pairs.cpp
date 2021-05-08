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

int _check_Element_Equal_Or_Not(v(int) _input)
{
    int _input_Length = _input.size();

    // This curly bracket are for assigning with Zero.
    int _sum_Even{};
    int _Sum_Odd{};

    // Finding even index's sum.
    for(int _index = 0; _index < _input_Length; _index++)
    {
        if(!(_index & 1))
        {
            _sum_Even += _input.at(_index);
        }
        else
        {
            _Sum_Odd += _input.at(_index);
        }
    }

    return (_sum_Even == _Sum_Odd) ? true : false;
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    // Iff the logic to solve this problem If the sum of all Even index's element and Odd index's element is equal then element will be equal.

    v(int) _input = {2,1,3,4};

    cout << (_check_Element_Equal_Or_Not(_input) ? "Yes" : "No"); 

    return 0;

}