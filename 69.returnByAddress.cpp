/*
Function can also return the address

int fun(){
    int x=10;
    return &x;     //we can not return the address of local variable(x). once the function ends, 
    local variable x will be deallocated from the memory. 
    But we can return the address of heap memory.
}
*/
#include<iostream>
using namespace std;
int *fun(int size){
    int *p=new int[size]; //Array in heap
    for(int i=0;i<size;i++){
        p[i]=i+1;
    }
    return p;    //returns address of first element
}
int main(){
    int *ptr = fun(5);      // Calls fun and stores the pointer to the array
    cout << *ptr << endl;    // Outputs the first element of the array (1)
    cout << "Address of array: " << ptr << endl; // Prints the address
    // Output the entire array
    for (int i = 0; i < 5; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;

    delete[] ptr; // Frees the allocated memory
    return 0;
}

/*

this is example of returning a pointer (or "returning by address") from a function. 
In our code, the fun function allocates an array dynamically on the heap and returns a pointer 
to the first element of that array. Since the memory is allocated on the heap, it persists after
 the function returns and can be accessed from main.*/