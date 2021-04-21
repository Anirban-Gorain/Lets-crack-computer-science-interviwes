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

// Find duplicate.

int _find_Duplicate(string _data)
{
	// We have maximum 256 chracters, We will create a Array of 256 blocks each blocks will be 0 initially. Linearly we will traverse the eintre string, String's chracter's ASCCI will be index, Each of the crossponding block's value will be increment.
	
	int _array[256] = {0};
	
	for(int _traverse = 0; _traverse < _data.size(); _traverse++)
	{
		_array[(int) _data[_traverse]]++;
	}
	
	for(int _traverse = 0; _traverse < 256; _traverse++)
	{
		if(_array[_traverse] > 1)
		{
			cout << (char) _traverse;
		}
	}
	
	return 0;
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    /* 
    
        P.D : Given a string we have to return true if that string contain any duplicate element.

        EX,

        ABCDA = True (A)
        ABCD = False
        ABCAEF = True (A)
    
    */

    string _data;
    cin >> _data;
    _find_Duplicate(_data);

    return 0;

}