#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define f first
#define s second
#define ll long long
#define pub .push_back()
#define pob .push_back()
#define mp make_pair
#define p(_x, y) pair<_x, y>
#define v(_x) vector<_x>
#define m(_x, y) map<_x, y>
#define pq(_x) priority_queue<_x>
#define setbits(_x) __builtin_popcountll(_x)
#define zrobits(_x) __builtin_ctzll(_x)
#define sp(_x, y) fi_xed<<setprecision(y)<<_x
#define dma(arr,n,type) type *arr=new type[n];
#define w(_x) int _x; while(_x--)
#define sq(_x) _x*_x
#define its(_x) (string) #_x
#define sti(_x) (int) _x
#define fti(_x) (int) _x
#define deb(_x) cout << #_x << " = " << _x << endl;
#define loop(_x, _s ,_n) for(int _x = _s; _x < _n; ++ _x)

void _fio(void)
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}

class _generate_No
{
    private:

    public:

    void _generate_All_Digits(int _n)
    {
        queue<string> _res;

        for(char _i = '1'; _i <= '9'; _i++)
        {
            string _t = "";
            _t += _i;
            _res.push(_t);
        }

        while(_n != 0)
        {
            string _front = _res.front();

            _res.pop();

            for(char _i = '1'; _i <= '9'; _i++)
            {
                string _new_No = _front + _i;

                _res.push(_new_No);
            }

            cout << _front << '\n';

            _n--;
        }
    }
};

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    _generate_No _obj;

    _obj._generate_All_Digits(20);

    return 0;

}