/*
We can write more than one function with same Name But diffrenet Arguments list.(diff no of 
datatypes, diffrent types of data types).
While its return type donot matter as difference.
*/
#include<iostream>
using namespace std;
int add(int x, int y){  //it will be same to float add(int,int)
    return x+y;
}
int add(int x, int y, int z){
    return x+y+z;
}
float add(float x, float y){
    return x+y;
}
int main(){
    int a=10, b=15, c, d;
    c=add(a,b);
    d=add(a,b,c);
    float i=2.3f,j=3.5f,k;
    k=add(i,j);
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<k<<endl;
}