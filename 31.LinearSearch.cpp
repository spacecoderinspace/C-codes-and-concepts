#include <iostream>
using namespace std;
int main() {
    int n,i,key;
    cout<<"enter the number for size of array";
    cin>>n;
    int a[n];
    cout<<"Enter Numbers :";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the Number to be Searched in the Arrray";
    cin>>key;
    for(i=0;i<n;i++){
        if(key==a[i]){
            cout<<"found at"<<i; 
            return 0;
        }
    }
    cout<<"Not Found";
    return 0;
}
