/*
code has an issue with the strcat and strncat calls, as it may lead to a buffer overflow.

Here's the breakdown:

Buffer Size for s1 and s2:

s1 has only enough space for "Good" (5 characters, including the null terminator).
s2 has only enough space for "Morning" (8 characters, including the null terminator).
When you use strcat(s1, s2);, it tries to append "Morning" to "Good", but there is not enough space in s1, leading to undefined behavior (buffer overflow).
How to Fix It:

Allocate enough space in s1 to hold both "Good" and "Morning".
Ensure strncat does not exceed the target array's capacity.

#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s1[]="Good";
    char s2[]="Morning";
    strcat(s1,s2);
    strncat(s2,s1,2);
    cout<<s1<<endl;
    cout<<s2<<endl;
    return 0;
}

*/
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s1[20]="Good";
    char s2[20]="Morning";   //now its good
    strcat(s1,s2);
    strncat(s2,s1,2);
    cout<<s1<<endl;
    cout<<s2<<endl;
    return 0;
}