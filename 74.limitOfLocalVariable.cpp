#include<iostream>
using namespace std;
int v=0;
void fun(){
    int a=5;
    a++;//on each fun call it will turn from 5 --> 6 bcz its local var and each time start from 5
    v++;  //on each fun call it will increase 0->1->2->3->4->5....
    cout<<a<<" "<<v<<endl;
}
int main(){
    fun();
    fun();
    fun();
    fun();
}

/*
6 1
6 2
6 3     just for better understanding this is the output of this code
6 4
*/