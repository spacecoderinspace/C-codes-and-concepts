/* 
single quote for char
double quote for string
Note: The behavior of string literals and pointer initialization can vary between C and C++.
 In C++, it's generally recommended to use const char *t to indicate that the string literal is 
 read-only.
*/
#include<iostream>
using namespace std;
int main(){
    char x='A';
    char s[10]="Hello"; //char array of size 10 
    cout<<s;
    char x1[]="hello";
    char s2[]={'h','e','l','l','o','\0'};
    char y[]={66,67,68,69,70,'\0'};
    const char *t="hello";//makes it clear that t points to astring literal,which shouldnt be modified
    cout<<y;
}
/*
he line char *t="hello"; does not place the string in the heap, but instead in read-only memory 
(static memory). Attempting to modify *t later would lead to undefined behavior.
Although this isn’t an error by itself, be aware that using char *t = "hello";
 does not create a writable string in the heap.
*/
/*

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Allocate a string on the heap
    string *heapString = new string("Hello");

    // Print the string
    cout << *heapString << endl;

    // Free the allocated memory
    delete heapString;

    return 0;
}
Explanation
new string("Hello"): Creates a std::string object on the heap with the content "Hello".
delete: Frees the memory used by the std::string object.
Notes
std::string automatically manages its internal memory, making it easier to use without
 manually managing memory.
Always remember to call delete or delete[] on heap-allocated memory when you’re done 
to avoid memory leaks.

*/