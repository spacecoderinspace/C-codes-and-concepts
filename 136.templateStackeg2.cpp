#include <iostream>

using namespace std;

// Template class definition for Stack
// 'T' is a placeholder for the data type that the stack will hold
template <class T>
class Stack
{
private:
    T *stk;        // Pointer to an array that will hold the stack elements
    int top;       // Index of the top element in the stack
    int size;      // Maximum size of the stack

public:
    // Constructor: Initializes the stack with the given size
    // Allocates dynamic memory for the stack array and sets the top to -1
    Stack(int size)
    {
        this->size = size; // Set the size of the stack
        top = -1;           // Initialize top to -1, indicating that the stack is empty
        this->stk = new T[size]; // Dynamically allocate memory for the stack of type T
    }

    // Member functions to push and pop elements from the stack
    void push(T value);  // Function to add an element to the stack
    T pop();             // Function to remove and return the top element from the stack
};

// Definition of push() function outside the class using scope resolution
// This function adds a new element to the stack
template <class T>
void Stack<T>::push(T value)
{
    // Check if the stack is full
    if (top == size - 1)
    {
        cout << "Stack is full.\n"; // Print an error message if the stack is full
    }
    else
    {
        top++;                // Increment the top index
        stk[top] = value;     // Add the value to the stack at the current top index
        cout << "Added to the stack: " << value << endl; // Print a message showing the added value
    }
}

// Definition of pop() function outside the class using scope resolution
// This function removes and returns the top element of the stack
template <class T>
T Stack<T>::pop()
{
    T x = 0;  // Variable to hold the popped value
    // Check if the stack is empty
    if (top == -1)
        cout << "Stack is empty.\n"; // Print an error message if the stack is empty
    else
    {
        x = stk[top];  // Store the top element in x
        top--;         // Decrease the top index, effectively removing the element
        cout << "Popped: " << x << "\n"; // Print a message showing the popped value
    }
    return x; // Return the popped value
}

int main()
{
    // Create a stack of strings with a size of 4
    Stack<string> s(4);
    
    // Push string elements to the stack
    s.push("John");    // Add "John" to the stack
    s.push("Elliott"); // Add "Elliott" to the stack
    s.push("Darlene"); // Add "Darlene" to the stack
    s.push("Tyler");   // Add "Tyler" to the stack

    // Uncomment the following line to test stack overflow
    // s.push("Angela"); // This will not work because the stack is full

    // Pop elements from the stack one by one
    s.pop(); // Pop and print "Tyler"
    s.pop(); // Pop and print "Darlene"
    s.pop(); // Pop and print "Elliott"
    s.pop(); // Pop and print "John"

    // At this point, the stack is empty, and the next pop will print "Stack is empty."
}
