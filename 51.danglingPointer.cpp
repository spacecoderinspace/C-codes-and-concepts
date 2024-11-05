#include<iostream>
using namespace std;
void fun(int *q){
    cout<<"hi"<<endl;
    delete []q;          // Free the allocated memory
}
int main(){
    int *p=new int[5];
    fun(p);              // Pass pointer to fun for deletion
    p=nullptr;          // Set p to nullptr to avoid dangling pointer
    return 0;
}
/*
Memory Deallocation:

delete [] q;
This frees the allocated memory for the array. After this line, p in main now points to 
deallocated memory, so accessing it afterward would lead to undefined behavior.

Function Behavior: The function fun prints "hi" and then deallocates the memory.
 After calling fun(p); in main, the allocated memory is freed, but p still exists in main as
  a dangling pointer (a pointer to freed memory).

Important Note
Be cautious about accessing p after calling fun(p) in main. Since the memory is freed inside fun,
 any further operations on p will cause undefined behavior.

Output
The expected output is simply:
hi


To prevent potential issues with dangling pointers, you might set p to nullptr after calling fun(p) 
in main:

p = nullptr;  // Now p no longer points to deallocated memory.
*/