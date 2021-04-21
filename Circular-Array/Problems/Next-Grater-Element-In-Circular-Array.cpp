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
#define deb(x)             cout << #x << " = " << x << endl;
// #define ONLINE_JUDGE       -1

void _fio(void)
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}
 
void _next_Grater_Element(v(int) _elements)
{
    int _size_Of_Array = _elements.size();
    int _is_Found;

    for(int _terverse = 0; _terverse < _size_Of_Array; _terverse++)
    {
        _is_Found = 0;
        
        for(int _find_Element = _terverse; _find_Element < _terverse + _size_Of_Array; _find_Element++)
        {
            if(_elements.at(_find_Element % _size_Of_Array) > _elements.at(_terverse))
            {
                cout <<  _elements.at(_find_Element % _size_Of_Array) << " ";
                _is_Found = 1;
                break;
            }

        }

        if(_is_Found == 0)
        {
            cout << -1 << " ";
        }

    }
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    int _number_Of_Elements;
    cin >> _number_Of_Elements;

    v(int) _inputs;
    int _hold_Data;

    for(int _index = 0; _index < _number_Of_Elements; _index++)
    {

        cin >> _hold_Data;
        _inputs.push_back(_hold_Data);

    }    
 
    _next_Grater_Element(_inputs);
    cout << endl;
    
    return 0;

}