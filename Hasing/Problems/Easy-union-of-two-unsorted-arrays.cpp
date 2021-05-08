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

unordered_set <int> _union_Of_Two_Unsorted_Arrays(vector <int> _array_1, vector <int> _array_2)
{
    unordered_set <int> _union;

    _union.insert(_array_1.begin(), _array_1.end());
    _union.insert(_array_2.begin(), _array_2.end());

    return _union;
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    /* 
    
        Given two arrays with repeated elemets, Find their Union.

        I/P,

        a[] = {1, 5, 99, 5, 1, 5, 7, 32};
        b[] = {9, 78, 35, 42, 5, 50, 30};

        O/P,

        1, 5, 99, 7, 32, 9, 78, 35, 42, 50, 30

    */

   vector <int> _array_1 = {1, 5, 99, 5, 1, 5, 7, 32};
   vector <int> _array_2 = {9, 78, 35, 42, 5, 50, 30};

   unordered_set <int> _catch_Result = _union_Of_Two_Unsorted_Arrays(_array_1, _array_2);

   for(auto _iterator = _catch_Result.begin(); _iterator != _catch_Result.end(); _iterator++)
   {
       cout << *(_iterator) << " ";
   }

    return 0;

}