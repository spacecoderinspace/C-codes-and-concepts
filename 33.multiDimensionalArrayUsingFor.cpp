#include<iostream>
using namespace std;
int main(){                                      
    for(int i=1;i<=5;i++){                        //For Multi Dimensional Array we need to use Nested Loops
        for(int j=1;j<=5;j++){
            cout<<'('<<i<<','<<j<<')'<<" ";
        }
        cout<<endl;
    }
}