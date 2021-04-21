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

// Time complexity O(n) and space Complexity O(1).

vector <int> max_of_subarrays(int *arr, int n, int k)
{
    int _start, _end;
    list <int> _max;
    vector <int> _result;

    vector <int> _result;
    if(n == 0 || k > n)
    {
        return _result;
    }

    _start = 0;
    _end = 0;

    while (_end < n)
    {
        if(_end-_start+1 < k)
        {
            while(_max.size() != 0 && _max.back() < arr[_end])
            {
                _max.pop_back();
            }

            _max.push_back(arr[_end]);
            _end++;
        }
        else if(_end-_start+1 == k)
        {
            while(_max.size() != 0 && _max.back() < arr[_end])
            {
                _max.pop_back();
            }

            _max.push_back(arr[_end]);
            _result.push_back(_max.front());

            if(arr[_start] == _max.front())
            {
                _max.pop_front();
            }

            _start++;
            _end++;
        }
    }
    return _result;
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    

    return 0;

}