#include<iostream>
using namespace std;
int main(){        
    int count=1;                              
    for(int i=1;i<=5;i++){                        //For Multi Dimensional Array we need to use Nested Loops
        for(int j=1;j<=5;j++){
            if(count <= 9){
                cout<<'0'<<count<<" ";
                count++;
            }
            else {cout<<count<<" "; count++;}
        }
        cout<<endl;
    }
}