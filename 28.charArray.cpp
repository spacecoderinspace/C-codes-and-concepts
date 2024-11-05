#include<iostream>
using namespace std;
int main(){
    char a[5]={'f','A',66,67,68};
    for(auto x:a){
        cout<<x<<endl;
    }
}