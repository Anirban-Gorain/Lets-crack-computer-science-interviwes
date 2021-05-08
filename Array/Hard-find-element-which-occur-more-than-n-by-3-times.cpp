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

// O(n) time complexity and O(n) space complexity.

vector <int> majorityElement(vector <int> & nums)
{
    unordered_map <int, int> _element_And_Their_Frequency;

    //   Assign elements.

    for(int _terverse = 0; _terverse < nums.size(); _terverse++)
    {
        _element_And_Their_Frequency[nums.at(_terverse)]++;
    }

    // Making actual result.

    vector <int> _result;
    int _size = nums.size();
    int _criteria = _size / 3;

    for(unordered_map <int, int> :: iterator _terverse = _element_And_Their_Frequency.begin(); _terverse != _element_And_Their_Frequency.end(); _terverse++)
    {
        if((_terverse -> second) > _criteria)
        {
            _result.push_back(_terverse -> first);
        }
    }

    return _result;
}

// Used algorithm : Moore's voting algorithm.

vector <int> majorityElement_2(vector <int> & nums)
{
    
    int _container_1;
    int _container_2;
    int _con_1_Frequency = 0;
    int _con_2_Frequency = 0;
    int _status_Of_Container = 0; // Will not more than 3 - 1 => 2

    for(int _terverse = 0; _terverse < nums.size(); _terverse++)
    {
        if(nums.at(_terverse) == _container_1 && _con_1_Frequency > 0)
        {
            _con_1_Frequency++;
        }
        else if(nums.at(_terverse) == _container_2 && _con_2_Frequency > 0)
        {
            _con_2_Frequency++;
        }
        else if(_status_Of_Container < 2)
        {
            if(_con_1_Frequency == 0)
            {
                _container_1 = nums.at(_terverse);
                _con_1_Frequency++;
            }
            else if(_con_2_Frequency == 0)
            {
                _container_2 = nums.at(_terverse);
                _con_2_Frequency++;
            }

            _status_Of_Container++;
        }
        else
        {
            _con_1_Frequency--;
            _con_2_Frequency--;

            if(_con_1_Frequency == 0)
            {
                _status_Of_Container--;
            }

            if(_con_2_Frequency == 0)
            {
                _status_Of_Container--;
            }
        }
    }

    // Creating result.

    vector <int> _result;
    int _size = nums.size();
    int _criteria = _size / 3;

    _con_1_Frequency = 0;
    _con_2_Frequency = 0;

    for(int _terverse = 0; _terverse < _size; _terverse++)
    {
        if(_container_1 == nums.at(_terverse))
        {
            _con_1_Frequency++;
        }

        if(_container_2 == nums.at(_terverse) && _container_2 != _container_1)
        {
            _con_2_Frequency++;
        }
    }

    if(_con_1_Frequency > _criteria)
    {
        _result.push_back(_container_1);
    }

    if(_con_2_Frequency > _criteria)
    {
        _result.push_back(_container_2);
    }

    return _result;
}

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    int _size;
    int _hold;
    int _last;
    vector <int> _data;

    cin >> _last;

    for(int _terminate = 1; _terminate <= _last; _terminate++)
    {
        cin >> _hold;
        _data.push_back(_hold);
    }

    _data = majorityElement_2(_data);

    for(int _terminate = 0; _terminate < _data.size(); _terminate++)
    {
        cout << _data[_terminate] << " ";
    }

    return 0;
}