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

class _linear_Probing_Hash_Map
{

    protected :

    int _size_Of_The_Hash_Map;
    int _number_Of_Data = 0;

    int *_hash_Map = NULL;

    // 0 denotes empty, -1 denotes deleted, 2 denotes filled.
    int *_flag_Empty_And_Delete = NULL;

    void _fill_Initial()
    {
        for(int _terverse = 0; _terverse < _size_Of_The_Hash_Map; _terverse++)
        {
            _flag_Empty_And_Delete[_terverse] = 0;
        }
        return;
    }

    int _get_Index(int _data)
    {
        return (_data % _size_Of_The_Hash_Map);
    }

    public :

    _linear_Probing_Hash_Map(int _size_Hash_Map)
    {
        this -> _size_Of_The_Hash_Map = _size_Hash_Map;

        this -> _hash_Map = new int[_size_Of_The_Hash_Map];

        // The resone allocating memory at here is we are call _fill_Initial function in side this constructor so if we don't declar it first then will be through a error. If we declare it outside then after completing the execution of _fill_Initial will be allocate memory but fill initial initial need allocated block. Since pointer is has outside it is doesn't make any matter that where we are allocating memory.
        this -> _flag_Empty_And_Delete = new int[_size_Of_The_Hash_Map];

        this -> _fill_Initial();
    }

    int _insert(int _data)
    {
        // Checking the slot is empty or not.
        if(_number_Of_Data == _size_Of_The_Hash_Map)
        {
            // -1 return value from here denoted hash table can't take more value, Because it is full.
            return -1;
        }

        int _catch_Index = this -> _get_Index(_data);

        for(int _traverse_Hash_Map_Circularly = _catch_Index; _traverse_Hash_Map_Circularly % _size_Of_The_Hash_Map < _traverse_Hash_Map_Circularly + _size_Of_The_Hash_Map; _traverse_Hash_Map_Circularly++)
        {
            if(_flag_Empty_And_Delete[_traverse_Hash_Map_Circularly  % _size_Of_The_Hash_Map] == 0 || _flag_Empty_And_Delete[_traverse_Hash_Map_Circularly  % _size_Of_The_Hash_Map] == -1)
            {
                _hash_Map[_traverse_Hash_Map_Circularly % _size_Of_The_Hash_Map] = _data;
                _flag_Empty_And_Delete[_traverse_Hash_Map_Circularly % _size_Of_The_Hash_Map] = 2;
                _number_Of_Data++;

                break;
            }
        }

        // 0 return value from here denotes data successfully stored.
        return 0;
    }

    int _search(int _data)
    {
        int _catch_Index = this -> _get_Index(_data);

        for(int _traverse_Hash_Map_Circularly = _catch_Index; _traverse_Hash_Map_Circularly % _size_Of_The_Hash_Map < _traverse_Hash_Map_Circularly + _size_Of_The_Hash_Map; _traverse_Hash_Map_Circularly++)
        {
            if(_flag_Empty_And_Delete[_traverse_Hash_Map_Circularly % _size_Of_The_Hash_Map] == 0 || _flag_Empty_And_Delete[_traverse_Hash_Map_Circularly % _size_Of_The_Hash_Map] == -1)
            {
                return -1;
            }

            if(_hash_Map[_traverse_Hash_Map_Circularly % _size_Of_The_Hash_Map] == _data)
            {
                return 1;
            }
        }
        return -1;
    }

    int _delete(int _data)
    {
        int _catch_Index = this -> _get_Index(_data);

        for(int _traverse_Hash_Map_Circularly = _catch_Index; _traverse_Hash_Map_Circularly % _size_Of_The_Hash_Map < _traverse_Hash_Map_Circularly + _size_Of_The_Hash_Map; _traverse_Hash_Map_Circularly++)
        {
            if(_hash_Map[_traverse_Hash_Map_Circularly % _size_Of_The_Hash_Map] == _data && _flag_Empty_And_Delete[_traverse_Hash_Map_Circularly] == 2)
            {
                _flag_Empty_And_Delete[_traverse_Hash_Map_Circularly % _size_Of_The_Hash_Map] = -1;
                _number_Of_Data--;

                return 0;
            }
        }

        return -1;
    }

    void _visualize()
    {
        for(int _terverse = 0; _terverse < _size_Of_The_Hash_Map; _terverse++)
        {
            cout << _terverse << "_hash_Map -> " << _hash_Map[_terverse] << " _flag_Empty_And_Delete -> " << _flag_Empty_And_Delete[_terverse] << endl;
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

    _linear_Probing_Hash_Map _test_Hash_Map(13);

    
    cout << endl;
    cout << endl;

    _test_Hash_Map._insert(133154);
    _test_Hash_Map._insert(73);
    _test_Hash_Map._insert(70);
    _test_Hash_Map._insert(94);
    _test_Hash_Map._insert(1936);
    _test_Hash_Map._insert(455);
    _test_Hash_Map._insert(1000);
    _test_Hash_Map._insert(720);
    _test_Hash_Map._insert(3658);
    _test_Hash_Map._insert(7895);
    _test_Hash_Map._insert(1222);
    _test_Hash_Map._insert(365498);
    _test_Hash_Map._insert(125898);

    cout << endl << endl;
    _test_Hash_Map._delete(70);
    _test_Hash_Map._insert(10);
    _test_Hash_Map._visualize();
    cout << _test_Hash_Map._search(10);

    return 0;

}