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

void _tower_Of_Hanoi(int _no_Of_Disk, char _src, char _temp, char _dest, int & _count)
{
    _count++;

    if(_no_Of_Disk == 1)
    {
        cout << _no_Of_Disk << " " << _src << " to " << _dest << endl;
        _count;
        return;
    }

    _tower_Of_Hanoi(_no_Of_Disk - 1, _src, _dest, _temp, _count);
    cout << _no_Of_Disk << " " << _src << " to " << _dest << endl;
    _tower_Of_Hanoi(_no_Of_Disk - 1, _temp, _src ,_dest, _count);
}

void _fio(void)
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}


int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    int _count = 0;

    _tower_Of_Hanoi(64, 'S', 'T', 'D', _count);
    cout << _count << endl;

    return 0;

}