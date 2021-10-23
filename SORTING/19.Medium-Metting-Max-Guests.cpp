#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define f first
#define s second
#define ll long long
#define pub .push_back()
#define pob .push_back()
#define mp make_pair
#define p(_x, y) pair<_x, y>
#define v(_x) vector<_x>
#define m(_x, y) map<_x, y>
#define pq(_x) priority_queue<_x>
#define setbits(_x) __builtin_popcountll(_x)
#define zrobits(_x) __builtin_ctzll(_x)
#define sp(_x, y) fi_xed<<setprecision(y)<<_x
#define dma(arr,n,type) type *arr=new type[n];
#define w(_x) int _x; while(_x--)
#define sq(_x) _x*_x
#define its(_x) (string) #_x
#define sti(_x) (int) _x
#define fti(_x) (int) _x
#define deb(_x) cout << #_x << " = " << _x << endl;
#define loop(_x, _s ,_n) for(int _x = _s; _x < _n; ++ _x)

void _fio(void)
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}

// T/C O(n^2) and Aux space O(1)

int _is_Intersecting(int _start_I, int _end_I, int _s, int _e)
{
    if(_start_I >= _s)
    {
        return _start_I < _e;
    }
    
    // _start_I < _s

    return  _s <= _end_I;
}

int findMaxGuests_Naive(int Entry[], int Exit[], int N)
{
    int _start_I, _end_I, _max_Res = INT_MIN;

    for(int _i = 0; _i < N; _i++)
    {
        _start_I = Entry[_i]; _end_I = Exit[_i];
        int _count = 1;

        for(int _j = 0; _j < N; _j++)
        {
            if(_i == _j)
            continue;

            if(_is_Intersecting(_start_I, _end_I, Entry[_j], Exit[_j]) == 1)
            {
                _start_I = max(_start_I, Entry[_j]);
                _end_I = min(_end_I, Exit[_j]);
                _count++;
            }
            _max_Res = max(_max_Res, _count);
        }
    }

    return _max_Res;
}

// T/C O(n*log(n)) and Aux space O(1)

int findMaxGuests(int Entry[], int Exit[], int N)
{
    sort(Entry, Entry+N);
    sort(Exit, Exit+N);

    int _i = 1, _j = 0, _count = 1, _max_Res = 1;

    while(_i < N && _j <N)
    {
        if(Entry[_i] <= Exit[_j])
        {
            _i++; _count++;
        }
        else
        {
            _j++; _count--;
        }

        _max_Res = max(_max_Res, _count);
    }

    return _max_Res;
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    int Entry[] = {900, 600, 700};
    int Exit[] = {1000, 800, 730};

    cout << findMaxGuests(Entry, Exit, sizeof(Entry)/4);

    return 0;
}