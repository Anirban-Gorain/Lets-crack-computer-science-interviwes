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

// O(n) time complexity and O(n) space complexity. But not much efficient.

vector<int> dNums(vector <int> & A, int B)
{ 
    int _size_Of_Elements = A.size();
    vector <int> _result; 

    if(B > _size_Of_Elements)
    {
        return _result;
    }

    if(_size_Of_Elements == 1 && B == 1)
    {
        _result.push_back(1);
        return _result;
    }

    int _accessor = 0;
    int _no_Of_Windows = _size_Of_Elements - B + 1;
    int _is_A_Window_Is_Completed = 1;
    unordered_set <int> _elements;
    int _count_Distinct_Element = 0;

    if(_no_Of_Windows == _size_Of_Elements && B ==1)
    {
        for(int _terminate = 1; _terminate <= _no_Of_Windows; _terminate++)
        {
            _result.push_back(1);
        }

        return _result;
    }
    
    for(int _remaining_No_Of_Windows = 1; _remaining_No_Of_Windows <= _no_Of_Windows; _accessor++, _is_A_Window_Is_Completed++)
    {
        if(_is_A_Window_Is_Completed == B + 1)
        {
            _accessor = _remaining_No_Of_Windows;
            _remaining_No_Of_Windows++;
            _elements.clear();
            _result.push_back(_count_Distinct_Element);
            _count_Distinct_Element = 0;
            _is_A_Window_Is_Completed = 1;
        }

        if(_elements.find(A.at(_accessor)) == _elements.end())
        {
            _count_Distinct_Element++;
        }

        _elements.insert(A.at(_accessor));
    }

    return _result;
}

vector<int> dNums_Efficient(vector <int> & A, int B)
{
    unordered_map <int, int> _elements;

    for(int _terverse = 0; _terverse < B; _terverse++)
    {
        _elements[A.at(_terverse)]++;
    }

    vector <int> _result; 
    
    _result.push_back(_elements.size());
    
    for(int _terverse = B; _terverse < A.size(); _terverse++)
    {
        
        _elements[A.at(_terverse-B)]--;

        if(_elements[A.at(_terverse-B)] == 0)
        {
            _elements.erase(A.at(_terverse-B));
        }
        
        _elements[A.at(_terverse)]++;
        
        _result.push_back(_elements.size());
    }

    return _result;
}

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif
        

    return 0;

}