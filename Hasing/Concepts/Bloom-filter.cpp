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

// This bloom filter just gives an idea how bloom work. This bloom filter for string.

class _bloom_Filter
{

    public :

    int *_bloom_Filter_Array;
    int _size_Of_The_Bloom_Filter;

    // Constructor

    _bloom_Filter(int _size)
    {
        _size_Of_The_Bloom_Filter = _size;
        _bloom_Filter_Array = new int[_size];

        this -> _intilizion_Initial();
    }

    // Hash functions

    int _hash_One(string _data)
    {
        // Sum of all the character then mod with size of bloom array.

        ll _hash_Index = 0;
        int _hold_ASCII;

        for(int _terverse_String = 0; _terverse_String < _data.length(); _terverse_String++)
        {
            _hold_ASCII = (int) ((char) _data.at(_terverse_String));

            _hash_Index += _hold_ASCII;
        }

        // cout << "Hash two " << (int) (_hash_Index % _size_Of_The_Bloom_Filter) << endl;
        return (int) (_hash_Index % _size_Of_The_Bloom_Filter);
    }

    int _hash_Two(string _data)
    {
        // Multiplication of all the character then mode with bloom array.

        ll _hash_Index = 1;
        int _hold_ASCII;

        for(int _terverse_String = 0; _terverse_String < _data.length(); _terverse_String++)
        {
            _hold_ASCII = (int) ((char) _data.at(_terverse_String));

            _hash_Index *= _hold_ASCII;
        }

        // cout << "Hash two " << (int) (_hash_Index % _size_Of_The_Bloom_Filter) << endl;
        return (int) (_hash_Index % _size_Of_The_Bloom_Filter);
    }

    int _insert(string _data)
    {
        int _hash_One_Catch_Index = this ->_hash_One(_data);
        int _hash_Two_Catch_Index = this ->_hash_Two(_data);

        _bloom_Filter_Array[_hash_One_Catch_Index] = 1;        
        _bloom_Filter_Array[_hash_Two_Catch_Index] = 1; 

        return 1;       
    }

    int _search(string _data)
    {
        int _hash_One_Catch_Index = this ->_hash_One(_data);
        int _hash_Two_Catch_Index = this ->_hash_Two(_data);

        if(_bloom_Filter_Array[_hash_One_Catch_Index] == 1 && _bloom_Filter_Array[_hash_Two_Catch_Index] == 1)
        {
            return 1;
        }
        
        return -1;       
    }

    
    void _visualize()
    {
        for(int _terverse_Bloom_Filter = 0; _terverse_Bloom_Filter < _size_Of_The_Bloom_Filter; _terverse_Bloom_Filter++)
        {
            cout << _bloom_Filter_Array[_terverse_Bloom_Filter] << " ";
        }
        cout << '\n';

        return;
    }

    protected :

    void _intilizion_Initial(void)
    {
        for(int _terverse = 0; _terverse < _size_Of_The_Bloom_Filter; _terverse++)
        {
            _bloom_Filter_Array[_terverse] = 0;
        }

        return;
    }
};

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    _bloom_Filter _test_Bloom_Filter(37);

    _test_Bloom_Filter._insert("Anirban");
    _test_Bloom_Filter._insert("Airban");
    _test_Bloom_Filter._insert("Aan");
    _test_Bloom_Filter._visualize();
    cout << endl << _test_Bloom_Filter._search("Airba");

    return 0;

}