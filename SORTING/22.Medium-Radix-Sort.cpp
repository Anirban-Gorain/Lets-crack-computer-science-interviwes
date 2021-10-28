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

bool _comp(const pair <int, int> &_f, const pair <int, int> &_s)
{
    return (_f.second < _s.second);
}

class _solution_Radix_Sort
{
    public :

    // T/C O(n*log(n)) and Aux space O(n)

    void _radix_Sort(vector <int> &_elem)
    {
        int _max_Digit = *max_element(_elem.begin(), _elem.end());

        // Finding the no of digit in _max_Element.

        int _count = 0;

        while(_max_Digit > 0)
        {
            _max_Digit = _max_Digit/10;
            _count++;
        }

        // Defining a data structure such that we can sort according to _elem's digit.

        vector <pair<int, int>> _data; // <_elem, _places>

        int _n = _elem.size();

        for(int _i = 0; _i < _n; _i++)
        {
            _data.push_back(make_pair(_elem[_i], 0));
        }

        // Now, Will be extract one by one digit from _elem and sort according to them.

        int _mul = 1;

        for(int _i = 0; _i < _count; _i++)
        {
            for(int _j = 0; _j < _n; _j++)
            {
                _data[_j].second = (_data[_j].first / _mul)%10; // Extracting the last digit
            }

            _mul *= 10;

            sort(_data.begin(), _data.end(), _comp);          
        }

        // Copying the element.

        for(int _i = 0; _i < _n; _i++)
        {
            _elem[_i] = _data[_i].first;
        }
    }

    // This code belongs to GFG

    // T/C O(no-of-digits * (n + base)) and Aux space O(n + base) [Base = 10 here]

    void countingSort(int arr[], int n, int exp) 
    { 
        int output[n];
        
        int count[10] = { 0 }; 

        for (int i = 0; i < n; i++) 
            count[(arr[i] / exp) % 10]++; 
    
        for (int i = 1; i < 10; i++) 
            count[i] += count[i - 1]; 
    
        for (int i = n - 1; i >= 0; i--)
        { 
            output[count[(arr[i] / exp) % 10] - 1] = arr[i]; 
            count[(arr[i] / exp) % 10]--; 
        } 
    
        for (int i = 0; i < n; i++) 
            arr[i] = output[i]; 
    }  
    
    void radixsort(int arr[], int n) 
    { 
        int mx = arr[0]; 

        for (int i = 1; i < n; i++) 
            if (arr[i] > mx) 
                mx = arr[i]; 
    
        for (int exp = 1; mx / exp > 0; exp *= 10) 
            countingSort(arr, n, exp); 
    } 
};

int main(void)
{

    // _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    _solution_Radix_Sort _test;

    vector <int> _element = {1000, 5, 878, 369, 193258, 2};

    _test._radix_Sort(_element);

    for(auto _it = _element.begin(); _it != _element.end(); _it++)
    {
        cout << *_it << " ";
    }
    
    return 0;

}