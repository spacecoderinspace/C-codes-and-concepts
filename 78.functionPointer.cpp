/*
This is like Polymorphism. In function Overriding, Internally, function pointers are used to 
achieve Run time Polymorphism(i.e. one function pointer can point on any fun with same signature) 
#include<iostream>
using namespace std;
void display()
{
    cout<<"Hello";
}
int main(){
    void(*fp)();  <--Declaration
    fp=display;   <--Initialisation
    (*fp)();      <--call
}
*/
#include<iostream>
using namespace std;
int max(int x, int y){
    return x>y?x:y;
}
int min(int x, int y){
    return x<y?x:y;
}
int main(){
    int (*fp)(int, int);
    fp=max;
    int result = (*fp)(10, 5);  // Store the result 
    cout << result << endl;
    fp=min;
    result=(*fp)(10,5);
    cout<<result<<endl;
}