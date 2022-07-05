#include <iostream>

using namespace std;
class stackoverflow
{
};
class stackunderflow
{
};

class stack
{
private:
    int *stk;
    int top = -1;
    int size;

public:
    stack(int sz)
    {
        size = sz;
        stk = new int[size];
    }

    void push(int x)
    {
        try
        {
            if (top == size - 1)
                throw stackoverflow();
            top++;
            stk[top] = x;
        }
        catch (stackoverflow e)
        {
            cout << "Stack Is Overflowing !!";
        }
    }

    int pop()
    {
        try{
        if (top == -1)
            throw stackunderflow();
        return stk[top--];
        }
        catch(stackunderflow e){
            cout<<"Stack is UnderFlowing !!";
        }
    }
};

int main()
{
    stack s(5);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(10);
    s.push(9);
    s.push(8);
    
    return 0;
}