/*
2 headers file string.h and cstring
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s[]="Hello";
    cout<<strlen(s); 
}

#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char *s;
    cout<<"Enter a string :";
    cin>>s;
    cout<<"Length is :"<<strlen(s);
    return 0;
} 
leading to an exception because this code will likely cause a runtime error or undefined behavior
 because s is an uninitialized pointer. When you use cin >> s;, it will attempt to store input in 
 an undefined memory location, which can lead to a crash.

To fix this, you need to allocate memory for s before reading into it.
*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
     int maxSize = 100;
    char *s = new char[maxSize]; // Dynamically allocate memory for the input string
    cout<<"Enter a string :";
    cin.get(s,100);
    cout<<"Length is :"<<strlen(s);
    return 0;
} 