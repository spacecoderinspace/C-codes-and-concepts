#include<iostream>
using namespace std;
enum day{Mon, Tue, Wed, Thu, Fri, Sat, Sun};
int main(){
    day d1,d2;
    d1=Tue;
    d2=Sun;
    cout<<d1<<endl;
    cout<<d2<<endl;
    if(d2==Sun) cout<<"wow";
    return 0;
}