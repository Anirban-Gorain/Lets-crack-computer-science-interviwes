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

// T/C Best O(n), Worst O(n^2) and Aux space O(_bkt_Size * c) where c = max no of column

class _bkt_Sort
{
    public :

    void _bucket_Sort(int _elem[], int _n, int _bkt_Size)
    {
        int _max_Elem = * max_element(_elem, _elem+_n);

        _max_Elem++; // For preventing case like (_bkt_Size * _max_Elem) / _max_Elem;

        // Creating bucket, Arrays of vector

        vector <int> _bkt[_bkt_Size];

        // Assigning elements into the appropriate bucket.

        for(int _i = 0; _i < _n; _i++)
        {
            int _bkt_Ind = (_bkt_Size * _elem[_i]) / _max_Elem; // (_bkt_Size / _max_Elem) = 4/80 = 1/20.something => Therefor [0, 20] then [21, 40] then [41, 60] ...

            _bkt[_bkt_Ind].push_back(_elem[_i]);
        }

        // Sorting

        for(int _i = 0; _i < _bkt_Size; _i++)
        {
            sort(_bkt[_i].begin(), _bkt[_i].end());
        }

        // Concating

        int _ind = 0;

        for(int _i = 0; _i < _bkt_Size; _i++)
        {
            for(int _j = 0; _j < _bkt[_i].size(); _j++)
            {
                _elem[_ind++] = _bkt[_i][_j];
            }
        }
    }
};


int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    /* 
        These are the follwing two cases where most suitable algorithm for sorting is Bucket sort.

        1) Consider a situation where we have number uniformly distributed between range from [0, 10^8].
        2) Consider a another situation where we have floting point numbers uniformly distributed in the range form [0.0, 0.1).

        What does mean of Uniformly distribution : If there are 1000 numbers & the range [0.0, 0.1), If this range has to be divided into 10 equal parts then from each part will belong 100 numbers and this division of elements to be called as "Uniformly divided".

        Bucket sort :

        Bucket sort assume that data always will be distributed uniformly on an avarage. Then each bucket need to sort individually and then just has to be concat all the bucket. The main T/C is to sort, If we use selection sort to sort these bucket then and if the no of data are small the selection sort will work well, But if elements are not distributed uniformly then T/C will be O(n^2) so with selection sort implementation of bucket sort worst case T/C is O(n^2).
    */

   _bkt_Sort _test;

   int _elem[] = {30, 40, 10, 80, 5, 12, 70};
   int _bkt_Size = 4;

   _test._bucket_Sort(_elem, 7, _bkt_Size);

   for(int _i = 0; _i < 7; _i++)
   {
       cout << _elem[_i] << " ";
   }

    return 0;
}