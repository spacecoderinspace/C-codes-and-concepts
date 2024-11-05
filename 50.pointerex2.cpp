#include<iostream>
using namespace std;
int main(){
    int a[5]={2,4,5,6,7};
    int *p=a;
    int *k=a+5;
    while(p<k){
        cout<<*p<<endl;
        p++;  
    }
return 0;
}
/*
Size of pointer is independent of its data type.
int *p, float *p, or char *p, all takes 8 bytes in latest compiler
*/