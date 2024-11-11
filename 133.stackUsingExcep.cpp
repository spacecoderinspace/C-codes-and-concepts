/*
#include <iostream>

using namespace std;

class StackOverFlow : exception
{
};
class StackUnderFlow : exception
{
};

class Stack
{
private:
    int *stk;
    int top = -1;
    int size;

public:
    Stack(int sz)
    {
        this->size = sz;
        stk = new int[size];
    }

    void push(int x)
    {
        try
        {
            if (top == size - 1)
                throw StackOverFlow();
            top++;
            stk[top] = x;
            cout << "Added to the stack: " << x << endl;
        }
        catch (StackOverFlow e)
        {
            cout << "Stack Overflow you have exceeded the size of stack.\n";
        }
    }

    int pop(){
        try{
            if (top == -1)
                throw StackUnderFlow();
            cout << "Popped from stack: " << stk[top] << endl;
            return stk[top--];
        }
        catch (StackUnderFlow f){
            cout << "You are trying to pop from an empty stack.\n";
        }
        return 0;
    }
};

int main()
{
    Stack s(5);
    s.pop();
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(10);
    s.push(15);
    s.push(45);
    s.pop();
    s.pop();
}
*/
#include <iostream>
#include <exception>

using namespace std;

// Custom exceptions with meaningful error messages
class StackOverFlow : public exception {
public:
    const char* what() const noexcept override {
        return "Stack Overflow: You have exceeded the size of the stack.";
    }
};

class StackUnderFlow : public exception {
public:
    const char* what() const noexcept override {
        return "Stack Underflow: You are trying to pop from an empty stack.";
    }
};

class Stack {
private:
    int *stk;
    int top = -1;
    int size;

public:
    Stack(int sz) {
        size = sz;
        stk = new int[size];
    }

    ~Stack() { // Destructor to clean up dynamic memory
        delete[] stk;
    }

    void push(int x) {
        if (top == size - 1) {
            throw StackOverFlow();
        }
        top++;
        stk[top] = x;
        cout << "Added to the stack: " << x << endl;
    }

    int pop() {
        if (top == -1) {
            throw StackUnderFlow();
        }
        cout << "Popped from stack: " << stk[top] << endl;
        return stk[top--];
    }
};

int main() {
    Stack s(5);
    try {
        s.pop();
    } catch (const exception& e) {
        cout << e.what() << '\n';
    }

    try {
        s.push(2);
        s.push(3);
        s.push(4);
        s.push(10);
        s.push(15);
        s.push(45); // This should throw a StackOverflow exception
    } catch (const exception& e) {
        cout << e.what() << '\n';
    }

    try {
        s.pop();
        s.pop();
    } catch (const exception& e) {
        cout << e.what() << '\n';
    }

    return 0;
}
