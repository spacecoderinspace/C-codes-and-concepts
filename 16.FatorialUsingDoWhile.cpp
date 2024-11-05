#include<iostream>
using namespace std;
int main(){
    int mul=1,i=1,limit;
    cout<<"Pls, Enter the Number";
    cin>>limit;
    do{
        mul*=i;
        i++;
    }while(i<=limit);
    cout<<"Factorial of "<<limit<<" is "<<mul;
}    