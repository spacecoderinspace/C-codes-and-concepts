/*
if Function will be accessing variables of main() using pointers. Pointers give power to a function
to access parameters of calling function
If we want a function to modify the actual parameter then use call by address

its not important that all arguments are call by address only some can also by pass by value
i.e. swap(int *a, int b) is also write
*/
#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x=10, y=20;
    swap(&x,&y);
    cout<<x<<" "<<y;
}