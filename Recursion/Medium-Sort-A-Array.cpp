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

vector <int> _inserter(vector <int> & _nums, int _to_Be_Insert)
{
    if(_nums.size() == 0 || (_nums[_nums.size() - 1] < _to_Be_Insert))
    {
        _nums.push_back(_to_Be_Insert);
        return _nums;
    }

    int _temp = _nums[_nums.size() - 1];

    _nums.pop_back();
    
    vector <int> _catch = _inserter(_nums, _to_Be_Insert);
    _catch.push_back(_temp);

    return _catch;
}

vector <int> _sort(vector <int> _nums)
{
    if(_nums.size() == 1)
    {
        return _nums;
    }

    int _temp = _nums[_nums.size() - 1];

    _nums.pop_back();
    vector <int> _catch = _sort(_nums);

    _catch = _inserter(_catch, _temp);

    return _catch;
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    vector <int> _test = {9, 7, 1, 31, 12, 45, 69, 32};
    _test = _sort(_test);

    for(int _i = 0; _i < _test.size(); _i++)
    {
        cout << _test[_i] << " ";
    }

    return 0;

}