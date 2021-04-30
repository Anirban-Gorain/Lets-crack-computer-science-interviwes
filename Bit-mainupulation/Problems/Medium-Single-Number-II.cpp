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

class Solution
{
	public:

    // Time complexity O(32n) and space complexity O(1).

    int singleNumber_sol1(vector<int> & nums)
	{
		int _res = 0;
		int _place = 1;

		for(int _check_All_Place = 0; _check_All_Place < 32; _check_All_Place++)
		{
			int _cout_No_Of_Ones = 0;
			int _if_All_No_Are_Zero  = 0;

			for(int _each_Elements = 0; _each_Elements < nums.size(); _each_Elements++)
			{
				if(nums[_each_Elements] == 0)
				{
					_if_All_No_Are_Zero++;
					continue;
				}

				if((nums[_each_Elements] & 1) == 1)
				{
					_cout_No_Of_Ones++;
				}

				nums[_each_Elements] = nums[_each_Elements] >> 1;
			}

			if(_if_All_No_Are_Zero ==  nums.size())
			{
				break;
			}

			_res += ((_cout_No_Of_Ones % 3) * _place);
			_place <<= 1;
		}

		return _res;
    }

    // Time complexity O(n*log(n)) And space complexity O(1), But this is too good from above solution.

    int singleNumber_sol2(vector<int> & nums)
	{
        int _size = nums.size();

        sort(nums.begin(), nums.end());

        if(nums[0] != nums[1])
        {
            return nums[0];
        }
        else if(nums[_size - 1] != nums[_size - 2])
        {
            return nums[_size - 1];
        }

        for(int _ind = 1; _ind < _size; _ind += 3)
        {
            if(nums[_ind] != nums[_ind - 1])
            {
                return nums[_ind - 1];
            }
        }

        return 0;
    }

    // Time complexity O(n) and space complexity O(1). Not work for Negative answer.

    int singleNumber(vector<int> & nums)
	{
        int _3n = INT_MAX;
        int _3n_P_1 = 0;
        int _3n_P_2 = 0;

        for(int _ind = 0; _ind < nums.size(); _ind++)
        {
            int _com_3N = _3n & nums[_ind];
            int _com_3n_P_1 = _3n_P_1 & nums[_ind];
            int _com_3n_P_2 = _3n_P_2 & nums[_ind];

            _3n = _3n & (~_com_3N);
            _3n_P_1 = _3n_P_1 | _com_3N;

            _3n_P_1 = _3n_P_1 & (~_com_3n_P_1);
            _3n_P_2 = _3n_P_2 | _com_3n_P_1;

            _3n_P_2 = _3n_P_2 & (~_com_3n_P_2);
            _3n = _3n | _com_3n_P_2;
        }

        int _result = (_3n_P_1 | _3n_P_1);

        return _result;
    }

    // Time complexity O(n^2) and space complexity O(1)

    int singleNumber(vector<int> & nums)
    {    
	
		sort(nums.begin(), nums.end());
		int _count;
		int _hold = nums[0];

		for(int _first = 0; _first < nums.size(); _first += 3)
		{
			_count = 0;
			for(int _check = _first + 1; (_check < nums.size()) && (_count != 2); _check++)
			{
				if(_hold != nums[_check])
				{
					return nums[_check - 1];
				}

				_count++;
			}

			if((_first < nums.size()) && (_first != (nums.size() - 1)))
				_hold = nums[_first + 3];
		}

		return nums[nums.size() - 1];
	}
};

int main(void)
{

    _fio();

    // #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    // #endif

    Solution _test;
    vector <int> _send = {2, 2, 2, 3};
    cout << _test.singleNumber(_send);

    return 0;

}