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

void _implementation(bool _array[], char _operation, int _key)
{
	/*
		
		For _operation,
		
		s = Search;
		d = Delete;
		i = insert;

	*/

	if(_operation == 's')
	{
		cout << ((_array[_key] == true) ? "Present" : "Not present");
        cout << endl;
	}
	else if(_operation == 'd')
	{
		_array[_key] = false;
		cout << "Deleted" << endl;
	}
	else if(_operation == 'i')
	{
		_array[_key] = _key;
        cout << "Inserted" << endl;	
	}
	else
	{
		cout << "Wrong Operation" << endl;
	}	
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    /* 
    
        We have 1000 keys from 0-999.

        1) Implement Search.
        2) Implement Delete.
        3) Insert.

    */

   bool _array[1000] = {false};

   _implementation(_array, 'i', 10);
   _implementation(_array, 'i', 20);
   _implementation(_array, 'i', 119);
   _implementation(_array, 's', 10);
   _implementation(_array, 's', 20);
   _implementation(_array, 'd', 119);
   _implementation(_array, 's', 119);
   _implementation(_array, 'j', 119);

    return 0;

}