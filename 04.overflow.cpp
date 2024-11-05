/*
#include<iostream>
using namespace std;
int main(){
    char x=127;
    ++x;
    cout<<int(x);
}
*/ //Same is possible for Integer
#include<iostream>
using namespace std;
int main(){
    int x=INT32_MAX;
    cout<<x<<endl;
    x++;
    cout<<x<<endl;
    return 0;
}