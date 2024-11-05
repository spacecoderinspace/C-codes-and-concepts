/*once a size is allocated to array(which is allocated inside heap), we can not change the size
of array.
Imagine, If we want to modify the size of an array as in when required we can do it with 
Dynamic Array Inside Heap. */
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter number of elements :";
    cin>>size;
    int *p=new int[size];
    delete []p;              //before allocating new array, delete last array 
    cout<<"Enter the new size :";
    cin>>size;
    p=new int[size];      //new array with new size in heap is created
    return 0;
}