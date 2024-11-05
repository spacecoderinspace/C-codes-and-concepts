#include<iostream>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};    //in stack, when array is created in stack, then it will 
                                    //automatically get deleted also when goes out of scope
    int *p;                 //in stack
    p=new int[5];          //in heap, aaray created in Heap won't get deleted automatically will 
    p[0]=12;                     //stay throughout the program
    p[1]=13;
    cout<<p[1]<<endl;                     //so heap memory must be deallocated
    delete []p;          //delete array in heap otherwise it will create memory leak problem
    //p=NULL; instead use nullptr
    p=nullptr;
    return 0;
}