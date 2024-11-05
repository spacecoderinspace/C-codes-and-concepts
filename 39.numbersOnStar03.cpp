/*#include<iostream>
using namespace std;
int main(){                                  
    for(int i=1;i<=5;i++){                        
        for(int j=1;j<=5;j++){
           if(j>=i) cout<<i<<j<<" ";         This code wouldnt look synched due to poor allignment 
           else cout<<" ";
        }
        cout<<endl;
    }
}*/
#include<iostream>
using namespace std;
int main(){                                  
    for(int i=1;i<=5;i++){                        
        for(int j=1;j<=5;j++){
           if(j>=i) cout<<i<<j<<"  "; // Add extra space for alignment
           else cout<<"    "; // Four spaces for proper alignment
        }
        cout<<endl;
    }
}
