#include<iostream>
using namespace std;
int main(){
    int a[2][3]={2,3,4,5,6};
    for(auto &x:a){               //Its important to use referance in 2D array
        for(auto &y:x){           //Using references for 2D arrays in C++ is an effective way to 
            cout<<y<<" ";         //manage memory and ensure that your functions can operate on the
        }                        // original data without unnecessary copies.
        cout<<endl;
    }
}