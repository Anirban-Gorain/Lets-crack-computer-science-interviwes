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
    
        -unordered_map,

            ↳ Used to store key value pair.
            ↳ Internally use Hashing.
            ↳ Doesn't main any order of key value pair.
        
        How to define,

        unordered_map <Datatype (Key), int (Value)> _variable;

        Square bracket operator :

            If the key is present then data will be overwrite on the mentioned key. If key is not present then key will be add.

            _variable["Key"] = data; ➥ Key is adding and assigning the value.
            _variable["Key"] = Overwrite; ➥ Key is adding and assigning the value.

        Insert function :

            Use for insertion only.

            _variable.insert({"Key", 123}); 

        Iterate over the unordered_map :

            for(auto _each_Element : _variable)
            {
                cout << "Key = " << _each_Element -> first << " " << "Value = " << _each_Element -> second; 
            }

            for(auto _iterator = _variable.begin(); _iterator != _iterator.end(); _iterator++)
            {
                cout << "Key = " << _iterator -> first << " " << "Value = " << _iterator -> second;
            }

        Find function :

            _variable.find("key") : return desired iterator if element present, If not prsent then return a iterator beyond the last element.

        Count function :

            _variable.count("key") : return either 0/1 if element present return 1 if not present return 0.

        Size function :

            _variable.size() : Tells the number of record in unordered_map.

        Erase function :

            _variable.erase("Key" / Iterator to "Key") : Use to clear a particular record.
            _variable.erase(_variable.begin(), _variable.end());

        Time complexities of main operations,

            begin(), end(), size(), empty() takes O(1) time complexity.
            count(), find(), erase, insert(), [], at() takes O(1) on average.
        
    
     */

    return 0;

}