#include <iostream>
using namespace std;

template <class T>
class stack
{
private:
    T s[10];
    int top;

public:
    stack() : top(-1) {} // Constructor to initialize top

    void push(T x); // Function to add elements to the stack
    T pop();        // Function to remove elements from the stack
};

template <class T>
void stack<T>::push(T x)
{
    if (top == 9) {
        cout << "Stack Overflow" << endl;
        return;
    }
    s[++top] = x;
    cout << "Pushed to stack: " << x << endl;
}

template <class T>
T stack<T>::pop()
{
    if (top == -1) {
        cout << "Stack Underflow" << endl;
        return 0; // Adjust depending on the data type
    }
    cout << "Popped from stack: " << s[top] << endl;
    return s[top--];
}

int main()
{
    stack<int> intStack;      // Stack for integers
    intStack.push(1);
    intStack.push(2);
    intStack.pop();
    
    stack<float> floatStack;   // Stack for floats
    floatStack.push(1.1);
    floatStack.push(2.2);
    floatStack.pop();

    return 0;
}
