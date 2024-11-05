#include<iostream>
using namespace std;
int main(){
    char s[]{65,66,67,0,69,70}; //0 is ASCII for Null character
    //using STRING class
    string s1="HELLO";
    string *heapString = new string("yello");
    cout << *heapString << endl;  // Dereference pointer to print string on the heap
    cout<<s;
    cout<<s1;
    // Free the allocated memory for heapString
    delete heapString;
}