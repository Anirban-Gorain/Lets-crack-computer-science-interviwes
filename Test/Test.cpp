#include<iostream>
#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;

class Solution
{
	public:

	vector <int> majorityElement(vector <int> & nums)
	{
		int _n = nums.size();
		int _c1, _foc1;
		int _c2, _foc2;
		int _can_Be_Put = 0;

		for(int i = 0; i < _n; i++)
		{
			if(_c1 == nums[i] && _foc1 > 0)
			{
				_foc1++;
			}
			else if(_c2 == nums[i] && _foc2 > 0)
			{
				_foc2++;
			}
			else if(_can_Be_Put < 3-1)
			{
				if(_foc1 == 0)
					_c1 = nums[i];

				else if(_foc2 == 0)
					_c2 = nums[i];

				_can_Be_Put++;
			}
			else	
			{
				_foc1--;
				_foc2--;

				if(_foc1 == 0)
				{
					_can_Be_Put--;
				}
				else if(_foc2 == 0)
				{
					_can_Be_Put--;
				}
			}
		}

        // Creating result.

        vector <int> _result;
        int _size = nums.size();
        int _criteria = _size / 3;

        _foc1 = 0;
        _foc2 = 0;

        for(int _terverse = 0; _terverse < _n; _terverse++)
        {
            if(_c1 == nums.at(_terverse))
            {
                _foc1++;
            }

            if(_c2 == nums.at(_terverse) && _c2 != _c1)
            {
                _foc2++;
            }
        }

        if(_foc1 > _criteria)
        {
            _result.push_back(_c1);
        }

        if(_foc2 > _criteria)
        {
            _result.push_back(_c2);
        }

        return _result;
	}

	
};

int main()
{
    freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
    freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
       
}

