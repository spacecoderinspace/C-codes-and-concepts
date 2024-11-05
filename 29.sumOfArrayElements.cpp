#include<iostream>
using namespace std;
int main(){
    int a[5]={2,6,23,443};
    int sum=0;
    for(auto x:a){
        sum+=x;
    }
    cout<<"sum is "<<sum;
}