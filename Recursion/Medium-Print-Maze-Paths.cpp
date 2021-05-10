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

void printMazePaths(int sr, int sc, int dr, int dc, string psf)
{
    if(sr == (dr - 1) && sc == (dc - 1))
    {
        cout << psf <<endl;
        return;
    }

    // Horizontal 1. Horizontal 2, Horizontal 3.

    if(sr + 1 <= dr -1)
        printMazePaths(sr + 1, sc, dr, dc, psf + "h1");

    if(sr + 2 <= dr - 1)
        printMazePaths(sr + 2, sc, dr, dc, psf + "h2");

    if(sr + 3 <= dr - 1)
        printMazePaths(sr + 3, sc, dr, dc, psf + "h3");

    // Diagonal 1, Diagonal 2, Diagonal 3.

    if(sr + 1 <= dr -1 && sc + 1 <= dc - 1)
        printMazePaths(sr + 1, sc + 1, dr, dc, psf + "d1");

    if(sc + 2 <= dc - 1 && sr + 2 <= dr - 1)
        printMazePaths(sr + 2, sc + 2, dr, dc, psf + "d2");

    if(sc + 3 <= dc - 1 && sr + 3 <= dr - 1)
        printMazePaths(sr + 3, sc + 3, dr, dc, psf + "d3");

    // Vertical 1, Vertical 2, Vertical 3.

    if(sc + 1 <= dc - 1)
        printMazePaths(sr, sc + 1, dr, dc, psf + "v1");

    if(sc + 2 <= dc - 1)
        printMazePaths(sr, sc + 2, dr, dc, psf + "v2");

    if(sc + 3 <= dc - 1)
        printMazePaths(sr, sc + 3, dr, dc, psf + "v3");

}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    printMazePaths(0, 0, 3, 3, "");

    return 0;

}