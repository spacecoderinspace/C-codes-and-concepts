#include<iostream>
using namespace std;
int main(){
    int option,a,b,c;
    cout<<"Menu\n";
    cout<<"1. Add \n"<<"2. Sub \n"<<"3. Mul \n"<<"4. Div \n";
    cout<<"Pls Enter Your Choice Number :";
    cin>>option;
    cout<<"Enter 2 Numbers:";
    cin>>a>>b;
    switch(option){
        case 1: c=a+b;
        cout<<"Result is:"<<c<<endl;
        break;
        case 2:c=a-b;
        cout<<"Result is:"<<c<<endl;
        break;
        case 3:c=a*b;
        cout<<"Result is:"<<c<<endl;
        break;
        case 4:c=a/b;
        cout<<"Result is:"<<c<<endl;
        break;
        default: cout<<"Pls, choose the right choice"<<endl;
        break;
    }
}