/*
as reference is nickname to an existing variable.

Q. How is it possible that swap() can directly access the variables of main()?
Ans. One Function can not access the variables of  another functions, But here Swap is not a separate
funtion its a part of main() only.
               Because, whenever we use call by reference, the function automatically becomes 
Inline funtion.
Note :- If the piece of machine code is copied at the place of function call, then such functions 
are called Inline Function.
*/
#include<iostream>
using namespace std;
void swap(int &a, int &b){ //a is x only its just alias and b is y only
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=10,y=289;
    swap(x,y);
    cout<<x<<" "<<y;
}