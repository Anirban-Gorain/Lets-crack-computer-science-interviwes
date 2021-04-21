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

template <typename _hash_Map_Type>

class _hash_Map_Chain
{
	protected : 

		int _size_Of_Hash_Map;
		vector <_hash_Map_Type> *_hash_Map = new vector <_hash_Map_Type> [_size_Of_Hash_Map];

	public :
	
	_hash_Map_Chain(int _size)
	{
		_size_Of_Hash_Map = _size;
	}

	void _insert_Data(_hash_Map_Type _data)
	{
		int _index = _data % _size_Of_Hash_Map;
		_hash_Map[_index].push_back(_data);
	}

	int _search(_hash_Map_Type _data)
	{
		int _index = _data % _size_Of_Hash_Map;
		typename vector <_hash_Map_Type> :: iterator _result = find(_hash_Map[_index].begin(), _hash_Map[_index].end(), _data);
        
		return (_result != _hash_Map[_index].end()) ? 1 : -1;
	}

	void _delete(_hash_Map_Type _data)
	{
		int _index = _data % _size_Of_Hash_Map;
		typename vector <_hash_Map_Type> :: iterator _result = find(_hash_Map[_index].begin(), _hash_Map[_index].end(), _data);
        
		_hash_Map[_index].erase(_result);
	}

    void _visualize()
    {
        for(int _traverse = 0; _traverse < _size_Of_Hash_Map; _traverse++)
        {
            cout << _traverse << "-> ";
            for(typename vector <_hash_Map_Type> :: iterator _iterator = _hash_Map[_traverse].begin(); _iterator != _hash_Map[_traverse].end(); _iterator++)
            {
                cout << *(_iterator) << ", ";
            }
            cout << endl;
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

    _hash_Map_Chain <int> _hash_Map(6);

    _hash_Map._insert_Data(10);
    _hash_Map._insert_Data(81);
    _hash_Map._insert_Data(70);
    _hash_Map._insert_Data(70);
    _hash_Map._insert_Data(90);
    _hash_Map._insert_Data(11);
    _hash_Map._insert_Data(89);
    _hash_Map._insert_Data(75);
    _hash_Map._insert_Data(72);
    _hash_Map._insert_Data(93);

    // _hash_Map._delete(70);
    // _hash_Map._delete(70);
    _hash_Map._visualize();

    return 0;

}