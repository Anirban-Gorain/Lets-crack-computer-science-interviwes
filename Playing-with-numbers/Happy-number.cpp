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

// Approach 1 : A number will not be happy when that number giving same sequence.

// Approach 2 : The above Approach will take extra space, Nut we can implement the same Approach without using any extra space, It will derived by "Slow-increment & Fast-increment" technique.

// Approach 3 : Except the single digit no 7 and 1 come any other numbers single digit number then happy number is not possiable.

// Using Approach 2.

int _number_Square_Sum(int _number) 
{ 
    int _square_Sum = 0; 

    while (_number > 0) 
    { 
        _square_Sum += (_number % 10) * (_number % 10); 
        _number /= 10; 
    }

    return _square_Sum; 
} 

int _happy_Number(int _number)
{
	int _fast;
	int _slow;
	_fast = _slow = _number;

    do
	{
		_fast = _number_Square_Sum(_fast);
		_fast = _number_Square_Sum(_fast);
		
		_slow = _number_Square_Sum(_slow);		
	}
	while(_slow != _fast);
	
	return (_slow == 1);
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    int _number;
    cin >> _number;
    cout << _happy_Number(_number);

    return 0;

}