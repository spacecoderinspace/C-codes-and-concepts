/*
Reference is used to give alias or nickname to a variable.
reference dont consume any memory at all.
it must be initialised at the time of declaration
*/
#include<iostream>
using namespace std;
int main(){
    int x=10;
    int u=99;
    int &y=x;
   // int &y=u; within same fun() , y can not be referencing to any other vareiable
    cout<<y;
}