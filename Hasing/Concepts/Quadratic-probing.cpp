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

// These follwing two functions taken from GFG

bool isPrime(int n)  
{  
    // Corner cases  
    if (n <= 1)  return false;  
    if (n <= 3)  return true;  
    
    // This is checked so that we can skip   
    // middle five numbers in below loop  
    if (n%2 == 0 || n%3 == 0) return false;  
    
    for (int i=5; i*i<=n; i=i+6)  
        if (n%i == 0 || n%(i+2) == 0)  
           return false;  
    
    return true;  
}
int nextPrime(int N) 
{ 
  
    // Base case 
    if (N <= 1) 
        return 2; 
  
    int prime = N; 
    bool found = false; 
  
    // Loop continuously until isPrime returns 
    // true for a number greater than n 
    while (!found) { 
        prime++; 
  
        if (isPrime(prime)) 
            found = true; 
    } 
  
    return prime; 
}

class _hash_With_Quadratic_Probing
{
    protected :

    int _size_Of_The_Hash_Map;
    int _number_Of_Data;
    int *_hash_Map = NULL;

    // 0 denotes empty, -1 denotes deleted, 2 denotes filled.
    int *_flag_Empty_And_Delete = NULL;

    int _get_Index(int _data)
    {
        return (_data % _size_Of_The_Hash_Map);
    }

    void _fill_Initial()
    {
        for(int _terverse = 0; _terverse < _size_Of_The_Hash_Map; _terverse++)
        {
            _flag_Empty_And_Delete[_terverse] = 0;
        }
        return;
    }

    public :

    _hash_With_Quadratic_Probing(int _size)
    {
        // We are making the size of the hash map too large because, This is quadratic probing we are going to implement, Hence blocks are won't be search sequentially, Iff "We make number of blocks more than double" then quadratic probing gives guarantee that you will get a free space. That means Load-Factor (No of key / no of slot) < 0.5.

        this -> _size_Of_The_Hash_Map = nextPrime((_size * 2) + 10);
        this -> _hash_Map = new int [_size_Of_The_Hash_Map];

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
        int _increase_Quadratically = 0;
        int _base = 0;

        do
        {
            if(_flag_Empty_And_Delete[(_catch_Index + _increase_Quadratically) % _size_Of_The_Hash_Map] == 0 || _flag_Empty_And_Delete[(_catch_Index + _increase_Quadratically) % _size_Of_The_Hash_Map] == -1)
            {
                this -> _hash_Map[(_catch_Index + _increase_Quadratically) % _size_Of_The_Hash_Map] = _data;
                this -> _flag_Empty_And_Delete[(_catch_Index + _increase_Quadratically) % _size_Of_The_Hash_Map] = 2;
                _number_Of_Data++;
                return 0;
            }
            _base++;
            _increase_Quadratically = (int) pow((float) _base, 2.0);

        }while(_catch_Index + _increase_Quadratically < (_catch_Index + _size_Of_The_Hash_Map));
        
        return -1;
    }

    int _search(int _data)
    {
        int _catch_Index = this -> _get_Index(_data);
        int _increase_Quadratically = 0;
        int _base = 0;

        do
        {
            if(_flag_Empty_And_Delete[(_catch_Index + _increase_Quadratically) % _size_Of_The_Hash_Map] == 0)
            {
                return -1;
            }

            if(_flag_Empty_And_Delete[(_catch_Index + _increase_Quadratically) % _size_Of_The_Hash_Map] == 2 && _hash_Map[(_catch_Index + _increase_Quadratically) % _size_Of_The_Hash_Map] == _data)
            {
                return 1;
            }
            _base++;
            _increase_Quadratically = (int) pow((float) _base, 2.0);

        }while(_catch_Index + _increase_Quadratically < (_catch_Index + _size_Of_The_Hash_Map));
        
        return -1;
    }

    int _delete(int _data)
    {
        int _catch_Index = this -> _get_Index(_data);
        int _increase_Quadratically = 0;
        int _base = 0;

        do
        {
            if(_flag_Empty_And_Delete[(_catch_Index + _increase_Quadratically) % _size_Of_The_Hash_Map] == 0)
            {
                return -1;
            }

            if(_flag_Empty_And_Delete[(_catch_Index + _increase_Quadratically) % _size_Of_The_Hash_Map] == 2 && _hash_Map[(_catch_Index + _increase_Quadratically) % _size_Of_The_Hash_Map] == _data)
            {
                _flag_Empty_And_Delete[(_catch_Index + _increase_Quadratically) % _size_Of_The_Hash_Map] = -1;
                _number_Of_Data--;
                return 1;
            }
            _base++;
            _increase_Quadratically = (int) pow((float) _base, 2.0);

        }while(_catch_Index + _increase_Quadratically < (_catch_Index + _size_Of_The_Hash_Map));
        
        return -1;
    }

    double _load_Factor()
    {
        double _store_Load_Factor = ((double) _number_Of_Data / (double) _size_Of_The_Hash_Map);
        return _store_Load_Factor;
    }

    void _visualize()
    {
        for(int _terverse = 0; _terverse < _size_Of_The_Hash_Map; _terverse++)
        {
            cout << _terverse << " _hash_Map -> " << _hash_Map[_terverse] << " _flag_Empty_And_Delete -> " << _flag_Empty_And_Delete[_terverse] << endl;
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

    _hash_With_Quadratic_Probing _test_Quadratic_Probing(10);

    _test_Quadratic_Probing._insert(12345);
    _test_Quadratic_Probing._insert(123457);
    _test_Quadratic_Probing._insert(127459);
    _test_Quadratic_Probing._insert(123453);
    _test_Quadratic_Probing._insert(126451);
    _test_Quadratic_Probing._insert(122452);

    _test_Quadratic_Probing._delete(122452);
    _test_Quadratic_Probing._visualize();
    cout << _test_Quadratic_Probing._search(122452) << endl;
    cout << _test_Quadratic_Probing._load_Factor();
    

    return 0;

}