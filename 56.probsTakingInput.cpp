/*
Whenever we use cin.get() two times back to back when we input for 
first (let shubham mishra enter(new line)) then new line(i.e. is Enter) is taken by secong get().
to solve :-
a. either use cin.ignore() between these two cin.get.  OR
b. use cin.getline() instead of second cin.get
*/
#include<iostream>
using namespace std;
int main(){
    char s[100];
    char s2[100];
    cout<<"Enter your name :";
    cin.get(s,100);
    cout<<"Welcome sir,"<<s<<endl;
    cin.ignore();
    cout<<"Enter second Name :";
    cin.get(s2,100);
    cout<<"Welcome, sir"<<s2<<endl;
    return 0;
}