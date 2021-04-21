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

class _double_Hashing
{
    protected :

    int _hash_Map_Size;
    int _number_Of_Data = 0;

    int *_hash_Map;
    int *_flag_For_Delete_And_Fill;

    int _get_Index(int _data)
    {
        return (_data % _hash_Map_Size);
    }

    void _fill_Initial()
    {
        for(int _terverse = 0; _terverse < _hash_Map_Size; _terverse++)
        {
            _flag_For_Delete_And_Fill[_terverse] = 0;
        }
        return;
    }

    int _hash_1(int _data)
    {
        return (_data % _hash_Map_Size);
    }

    int _hash_2(int _data)
    {
        int _prime = 7;

        return (_prime - (_data % _prime));
    }

    public :

    _double_Hashing(int _size)
    {
        _hash_Map_Size = _size;
        this -> _hash_Map = new int [_size];
        this -> _flag_For_Delete_And_Fill = new int [_size];

        this -> _fill_Initial();
    }

    int _insert(int _data)
    {

        if(_number_Of_Data == _hash_Map_Size)
        {
            return -1;
        }

        _number_Of_Data++;

        int _hash_One_Result = _hash_1(_data);

        if(_flag_For_Delete_And_Fill[_hash_One_Result] != 2)
        {
            _hash_Map[_hash_One_Result] = _data;
            _flag_For_Delete_And_Fill[_hash_One_Result] = 2;

            return 1;
        }

        int _hash_Two_Result = _hash_2(_data);

        /* 
        
            This for loop condition is, h2 will not send 0 any time since _hash_Two_Healper > _hash map size then obviously _hash_Two_Healper * h2 will be more than the hash map size then we have to stop.

         */

        for(int _hash_Two_Healper = 1; _hash_Two_Healper <= _hash_Map_Size; _hash_Two_Healper++)
        {
            int _double_Hashing_Index = (_hash_One_Result + (_hash_Two_Healper * _hash_Two_Result)) % _hash_Map_Size;

            if(_flag_For_Delete_And_Fill[_double_Hashing_Index] != 2)
            {
                _hash_Map[_double_Hashing_Index] = _data;
                _flag_For_Delete_And_Fill[_double_Hashing_Index] = 2;

                cout << "---" << _double_Hashing_Index << endl;

                return 1;
            }
        }

        return -1;
    }

    // int _search(int _data)
    // {
        
    // }

    // int _delete(int _data)
    // {
        
    // }

    double _load_Factor(void)
    {
        return ((double) _number_Of_Data / (double) _hash_Map_Size);
    }

    void _visualize()
    {
        for(int _terverse = 0; _terverse < _hash_Map_Size; _terverse++)
        {
            cout << _terverse << " _hash_Map -> " << _hash_Map[_terverse] << " _flag_Empty_And_Delete -> " << _flag_For_Delete_And_Fill[_terverse] << endl;
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

    // Table size should be prime
    _double_Hashing _test_Object_Double_Hashing(17);

    _test_Object_Double_Hashing._insert(302);
    _test_Object_Double_Hashing._insert(302);
    _test_Object_Double_Hashing._insert(302);
    _test_Object_Double_Hashing._insert(302);
    _test_Object_Double_Hashing._insert(302);
    _test_Object_Double_Hashing._insert(302);
    _test_Object_Double_Hashing._insert(302);
    _test_Object_Double_Hashing._insert(302);
    _test_Object_Double_Hashing._insert(302);
    _test_Object_Double_Hashing._insert(302);
    _test_Object_Double_Hashing._insert(302);
    _test_Object_Double_Hashing._insert(302);
    _test_Object_Double_Hashing._insert(302);
    _test_Object_Double_Hashing._insert(302);
    _test_Object_Double_Hashing._insert(302);
    _test_Object_Double_Hashing._insert(302);
    _test_Object_Double_Hashing._insert(302);
    _test_Object_Double_Hashing._visualize();

    return 0;

}