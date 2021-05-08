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

class Solution
{
    public:

    // This entire solution will take O(2^n) time

    int kthGrammar_Naive(int N, int K)
    {
        string _catch = this -> _solve(N);

        return sti(_catch[K - 1]) - '0';
    }
    
    string _solve(int N)
    {
        if(N == 1)
        {
            return "0";
        }

        string _catch = _solve(N - 1);
        string _result = "";
        string _for_Zero = "01";
        string _for_One = "10";

        for(int _index = 0; _index < _catch.length(); _index++)
        {
            if(_catch[_index] == '0')
            {
                _result += _for_Zero;
            }
            else
            {
                _result += _for_One;
            }
        }

        return _result;
    }

    // Efficient solution

    int kthGrammar(int N, int K)
    {
        if(N== 1 && K == 1)
        {
            return 0;
        }
        
        int _mid = pow(2, N-1) / 2;

        if(K <= _mid)
        {
            int _temp = kthGrammar(N-1, K);
            cout << _temp;
            return _temp;
        }
        else
        {
            int _temp = kthGrammar(N-1, K-_mid);
            cout << _temp;
            return ! _temp;
        }
    }
};

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    Solution _test;
    cout << _test.kthGrammar(4, 5);

    return 0;

}