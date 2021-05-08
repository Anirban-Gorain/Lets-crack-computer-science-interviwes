#include <bits/stdc++.h>
#include <iostream>

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

class Solution
{
public:
    // Time complexity is O(n(log(n))) and space complexity is O(nums1.length() + nums2.length()).

    double findMedianSortedArrays_Naive(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> _sorted_Merged;

        for (int _index = 0; _index < nums1.size(); _index++)
        {
            _sorted_Merged.push_back(nums1.at(_index));
        }
        for (int _index = 0; _index < nums2.size(); _index++)
        {
            _sorted_Merged.push_back(nums2.at(_index));
        }

        sort(_sorted_Merged.begin(), _sorted_Merged.end());

        int _length = _sorted_Merged.size();

        if (_length % 2 == 0)
        {
            return (double)(_sorted_Merged.at(_length / 2) + _sorted_Merged.at((_length / 2) - 1)) / 2;
        }
        else
        {
            return (double)_sorted_Merged.at(_length / 2);
        }
    }

    // Time complexity is O(n) and space complexity is O(nums1.length() + nums2.length()).

    double findMedianSortedArrays_Naive_Efficient(vector<int> &nums1, vector<int> &nums2)
    {
        int _length_N1, _length_N2, _for_N1 = 0, _for_N2 = 0;
        vector<int> _sorted_Merged;

        _length_N1 = nums1.size();
        _length_N2 = nums2.size();

        while (_for_N1 < _length_N1 && _for_N2 < _length_N2)
        {
            if (nums1.at(_for_N1) < nums2.at(_for_N2))
            {
                _sorted_Merged.push_back(nums1.at(_for_N1));

                _for_N1++;
            }
            else if (nums1.at(_for_N1) > nums2.at(_for_N2))
            {
                _sorted_Merged.push_back(nums2.at(_for_N2));

                _for_N2++;
            }
            else
            {
                _sorted_Merged.push_back(nums1.at(_for_N1));
                _sorted_Merged.push_back(nums1.at(_for_N1));

                _for_N1++;
                _for_N2++;
            }
        }

        while (_for_N1 < _length_N1)
        {
            _sorted_Merged.push_back(nums1.at(_for_N1));
            _for_N1++;
        }

        while (_for_N2 < _length_N2)
        {
            _sorted_Merged.push_back(nums2.at(_for_N2));
            _for_N2++;
        }

        int _length = _sorted_Merged.size();

        if (_length % 2 == 0)
        {
            return (double)(_sorted_Merged.at(_length / 2) + _sorted_Merged.at((_length / 2) - 1)) / 2;
        }
        else
        {
            return (double)_sorted_Merged.at(_length / 2);
        }
    }

    // Time complexity O(log(min(nums1, nums2))) and space complexity is O(1)

    double findMedianSortedArrays(vector<int> & nums1, vector<int> & nums2)
    {
        int _start = 0, _end, _partation_In_Smaller_Nums, _n1_Length, _n2_Length, _partation_In_Bigger_Nums, _smaller_Max_Left, _smaller_Min_Right, _bigger_Max_Left, _bigger_Min_Right;

        // Selecting min array

        _n1_Length = nums1.size();
        _n2_Length = nums2.size();

        if(_n1_Length > _n2_Length)
        {
            return findMedianSortedArrays(nums2, nums1);
        }

        vector<int> &_min_Nums = nums1;
        vector<int> &_max_Nums = nums2;

        _end = _min_Nums.size();

        while (true)
        {
            _partation_In_Smaller_Nums = _start - (_start - _end) / 2;
            _partation_In_Bigger_Nums = (_n1_Length + _n2_Length + 1) / 2 - _partation_In_Smaller_Nums;

            _smaller_Max_Left = (_partation_In_Smaller_Nums == 0) ? INT_MIN : _min_Nums[_partation_In_Smaller_Nums - 1];
            _smaller_Min_Right = (_partation_In_Smaller_Nums == _min_Nums.size()) ? INT_MAX : _min_Nums[_partation_In_Smaller_Nums];

            _bigger_Max_Left = (_partation_In_Bigger_Nums == 0) ? INT_MIN : _max_Nums[_partation_In_Bigger_Nums - 1];
            _bigger_Min_Right = (_partation_In_Bigger_Nums == _max_Nums.size()) ? INT_MAX : _max_Nums[_partation_In_Bigger_Nums];

            if (_smaller_Max_Left <= _bigger_Min_Right && _bigger_Max_Left <= _smaller_Min_Right)
            {
                if (((_n1_Length + _n2_Length) & 1) == 0)
                {
                    int _temp = max(_bigger_Max_Left, _smaller_Max_Left) + min(_bigger_Min_Right, _smaller_Min_Right);
                    return (double) _temp / 2;
                }
                else
                {
                    return max((double)_smaller_Max_Left, (double) _bigger_Max_Left);
                }
            }
            else if (_bigger_Max_Left > _smaller_Min_Right)
            {
                _start = _partation_In_Smaller_Nums + 1;
            }
            else if (_smaller_Max_Left > _bigger_Min_Right)
            {
                _end = _partation_In_Smaller_Nums - 1;
            }
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

    vector<int> _data = {1,2};
    vector<int> _data1 = {3,4};

    Solution _test;
    cout << _test.findMedianSortedArrays(_data, _data1);

    return 0;
}