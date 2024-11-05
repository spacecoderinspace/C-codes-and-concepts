/*
#include<iostream>
using namespace std;
void display(){
    cout<<"Hello";
}
int main(){
    display();
}


#include<iostream>
using namespace std;
int add(int x, int y){
    int z;
    z=x+y;
    return z;
}
int main(){
    int a=10,b=15,c;
    c=add(a,b);
    cout<<c;
}
*/
#include<iostream>
using namespace std;
int maxim(int a,int b,int c){
    if(a>b && a>c){
        return a;
    }
    else if (b>c)
    {
        return b;
    }
    else return c;
}
int main(){
    int a=10,b=33,c=80,d;
    d=maxim(a,b,c);
    cout<<d;
}