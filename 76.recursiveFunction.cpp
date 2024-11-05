//Function which calls itself
#include<iostream>
using namespace std;
void fun(int n){
    if(n>0){
        cout<<n<<endl;
        fun(n-1);
    }
}
int main(){
    int x=5;
    fun(x);
}
//every recursive fun must have some condition so that it terminates after some calls