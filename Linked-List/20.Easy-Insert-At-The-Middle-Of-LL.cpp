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

struct Node
{
    int data;
    Node* next;
    
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
    public:

    // T/C O(2n) and Aux space O(1)

    int getMiddle(Node *head)
    {
        int _n = 0;

        // Counting nodes.

        Node *_curr = head;

        while(_curr != NULL)
        {
            _n++;
            _curr = _curr->next;
        }

        // Choosing the node.

        _curr = head;

        for(int _i=0; _i<_n/2; _i++)
        {
            _curr=_curr->next;
        }

        cout << _curr->next;
    }

    // T/C O(n) and Aux space O(1)

    int getMiddle(Node *head)
    {
        if(head == NULL)
            return -1;

        // Using slow and fast pointer

        Node *_slow = head;
        Node *_fast = head;

        while(_fast ->next != NULL && _fast != NULL)
        {
            _fast = _fast->next->next;
            _slow = _slow->next;
        }

        return (_slow->data);
    }
};

int main(void)
{

    _fio();

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
        freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);
    #endif

    

    return 0;

}