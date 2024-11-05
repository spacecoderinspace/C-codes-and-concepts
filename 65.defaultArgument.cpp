#include<iostream>
using namespace std; 
int add(int x,int y=0, int z=0){  //startmaking arguments default right to left w/o skipping any
  return x+y+z;  
}
int main(){
    int c=add(2,5);
    int d=add(2,5,8);
    int f=add(2,5,0);
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<f<<endl;    
}