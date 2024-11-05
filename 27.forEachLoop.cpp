/*
#include<iostream>
using namespace std;
int main(){
    int a[5]={2,4,6,8,20};
    for(int x:a) cout<<x<<endl;
}

#include<iostream>
using namespace std;
int main(){
    float a[5]={2.4f,6.8f,2,4,88};
    for(int x:a){
        cout<<x<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    float a[5]={2.4f,6.8f,2,4};
    for(float x:a){
        cout<<x<<endl;
    }
}

#include<iostream>
using namespace std;
int main(){
    float a[5]={2.4f,6.8f,2,4};
    for(auto x:a){                //Instead of float or int write auto
        cout<<x<<endl;
    }
}
    */
//One more very Important point 
#include <iostream>
using namespace std;
int main(){
    int a[]={8,6,3,9,7,4};
   // for(int x:a){
   //     cout<<++x<<endl; //original value wont be changed bcz x is getting copy of value
   // }
   //if you want to change the original value use the reference
    for(int &x:a){
        cout<<++x<<" "; //original value will be changed now
    }
    cout<<endl;
    for(int x:a){
        cout<<++x<<" "; //original value wont be changed bcz x is getting copy of value
    }

    return 0;
}


