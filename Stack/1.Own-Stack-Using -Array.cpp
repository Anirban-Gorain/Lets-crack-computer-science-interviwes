#include<iostream>

using namespace std;

class _stack
{
    private :

    int _cap;
    int *_arr;
    int _top;

    public :

    _stack(int _cap)
    {
        _arr = new int[_cap];
        _top = -1;
        this -> _cap = _cap;
    }

    void _push(int _elem)
    {
        if(_top == (_cap - 1))
        {
            cout << "Can't be push more elements";
            return;
        }

        _top++;
        _arr[_top] = _elem;
    }

    int _pop()
    {
        if(_top == -1)
            return -1;
        
        return _arr[_top--];
    }

    int _size()
    {
        return _top+1;
    }

    int _peek()
    {
        if(_top == -1)
            return -1;

        return _arr[_top];
    }

    bool _is_Empty()
    {
        return (_top == -1) ? 1 : -1 ;
    }
};