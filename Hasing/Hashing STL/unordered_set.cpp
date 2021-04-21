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

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    /* 
    
        The internal implementation of unordered_set is based on Hashing.

        -How to create a unordered_set ?

            unordered_set <Datatype> _variable_Name;

        -Insert function :

            _variable_Name.insert(Data) : Since its implementation based on "Hashing" element can be store any order.

        -Begin function :

            _variable_Name.begin() : Return a iterator to the first element in unordered_set.

        -End function :

            _variable_Name.end() : Return a iterator beyond the last element in the unordered_set.

        -Size function :

            _variable_Name.size() : Tells the number of element.

        -Clear function :

            _variable_Name.clear() : Clear the entire unordered_set.

        Find function :

            _variable_Name.find(Data) : If the date is present then return a iterator to Data. If the element is not present then return a iterator beyond the last elment.

        Count function :

            _variable_Name.count(Data) : It return either 0/1 if the element is present then return 1, If not present then return 0.
        
        Erase function :

            This function used to remove a specific or a set of item,

            EX,
                Removing specific item,

                _variable_Name.erase(Element)/_variable_Name.erase(Element to iterator).

            Removing bunch of item,

                _variable_Name.erase(Strting-iterator, End-iterator);

        ----------------------------------------------------------------------------

        -Internal working and Time-complexities of unordered_set's function

        insert(), find(element), erase(iterator), erase(element), count() takes O(1) on average.

        begin(), end(), cbegin(), cend(). size(), empty() takes O(1).


    
     */

    return 0;

}