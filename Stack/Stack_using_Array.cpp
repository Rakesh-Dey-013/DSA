#include <iostream>
using namespace std;

// Implement a Stack using an Array

class Stack
{
public:
    int *arr;
    int top, size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push(int num)
    {
        if (top < size - 1)
        {
            arr[++top] = num;
        }
        else
            cout << "Stack overflow" << endl;
    }

    void pop()
    {
        if (top >= 0)
            top--;
        else
            cout << "Stack underflow" << endl;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    int peek()
    {
        if (top >= 0)
            return arr[top];
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return;
        }

        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    Stack st(5);

    st.push(10);
    st.push(20);
    st.push(30);
    st.display();

    cout << "Top element: " << st.peek() << endl;

    st.pop();

    cout << "Top element: " << st.peek() << endl;

    st.display();

    return 0;
}
