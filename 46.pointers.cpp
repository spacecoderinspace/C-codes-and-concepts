#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *p;                   //Declaration
    p=&x;                    //Initialisation
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p;             //Dereferencing--> accessing the data of variable to which poiter 
}                        //was pointing 


/*
Size of pointer is independent of its data type.
int *p, float *p, or char *p, all takes 8 bytes in latest compiler
*/