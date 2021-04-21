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

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {

    int _size_Of_Elements = a.size();
    int _fill_Blocks_By = 0;
    int _store_Index[_size_Of_Elements];

    for(int _terminate = k; _terminate < k + _size_Of_Elements; _terminate++, _fill_Blocks_By++)
    {

        _store_Index[_terminate % _size_Of_Elements] = _fill_Blocks_By;

    }

    vector <int> _final_Result;
    int _which_Index_Element;

    for(int _index = 0; _index < queries.size(); _index++)
    {

        _which_Index_Element = queries[_index];
        _final_Result.push_back(a.at(_store_Index[_which_Index_Element]));
        cout << a.at(_store_Index[_which_Index_Element]);

    }

    return _final_Result;

}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    vector <int> _abc;
    vector <int> _q = {1,2,5};
    int _store_Input;

    for(int _index = 0; _index < 6; _index++)
    {

        cin >> _store_Input;
        _abc.push_back(_store_Input);

    }

    circularArrayRotation(_abc, 2, _q);

    return 0;

}