#include<iostream>

using namespace std;

struct _node
{
    int _data;
    _node *_nxt;

    _node(int _data)
    {
        this -> _data = _data;
        _nxt = NULL;
    }
};

class _stack
{
    private :

    _node *_head_And_Top;
    int _size;

    public :

    _stack()
    {
        _size = 0;
        _head_And_Top = NULL;
    }

    void _push(int _elem)
    {
        _node *_temp = new _node(_elem);

        if(_head_And_Top == NULL)
        {
            _head_And_Top = _temp;
        }
        else
        {
            _temp->_nxt = _head_And_Top;
            _head_And_Top = _temp;
        }

        _size++;
    }

    int _pop()
    {
        if(_size == 0)
        {
            cout << "No more element is in stack \n";
            return -1;
        }

        _node *_temp = _head_And_Top->_nxt;
        int _data = _head_And_Top->_data;
        delete _head_And_Top;
        _head_And_Top = _temp;
        _size--;

        return _data;
    }

    int _peek()
    {
        if(_size == 0)
        {
            cout << "No element is present \n";
            return -1;
        }

        return _head_And_Top->_data;
    }

    int _stack_Size()
    {
        return _size;
    }

    int _is_Empty()
    {
        if(_head_And_Top == NULL)
            return 1;
        else
            return -1;
    }
};

int main(void)
{

    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/input.txt", "r", stdin);
    freopen("C:/Users/Anirban Gorain/Desktop/Competitive-programming/output.txt", "w", stdout);

    cout << "Stack implementation \n\n";

    _stack _test_Stack;

    _test_Stack._push(10);
    cout << _test_Stack._peek() << "\n";
    _test_Stack._push(20);
    cout << _test_Stack._peek() << "\n";
    _test_Stack._push(28);
    cout << _test_Stack._peek() << "\n";
    cout << _test_Stack._stack_Size() << "\n";
    _test_Stack._pop();
    cout << _test_Stack._peek() << "\n";
    _test_Stack._pop();
    cout << _test_Stack._peek() << "\n";
    _test_Stack._pop();
    cout << _test_Stack._peek() << "\n";
    
    return 0;
}