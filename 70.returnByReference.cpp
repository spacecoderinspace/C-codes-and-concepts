#include<iostream>
using namespace std;
int &fun(int &x){  //its reference of local variable of main and Returns an integer reference.
    return x;
}
int main(){
    int a=10;
    fun(a)=25; //fun is actually acting as reference of variable a
    cout<<a;
}
/*
Components of int& fun(int &x)
int &x (Parameter):

This specifies that fun takes an argument x that is a reference to an integer (int &).
This means when you pass a variable to fun, you're passing the variable itself rather than a 
copy of its value, so fun can modify the original variable directly.
int& (Return Type):

The int& return type indicates that fun returns a reference to an int.
This allows the function to return a reference to a variable, enabling the caller to modify that
variable directly.
Why Return by Reference?
Returning by reference allows the function to "act on" or modify the original variable in the
caller's context. This is more powerful than returning a copy of a value because it allows the 
function to act as if it were the variable itself.


int& fun(int &x) {
    return x;
}
fun takes an integer reference (int &x) as an argument and returns a reference to x. Since x is 
passed by reference, any changes made to x in the caller function are reflected in the original 
variable.
Modifying a in main:
int a = 10;
fun(a) = 25;  // fun(a) returns a reference to `a`, allowing it to be modified
Here, fun(a) is treated as a reference to a, so fun(a) = 25; directly modifies the value of a to 25.
Output:

cout << a;
This line outputs 25, as the value of a has been changed.
Explanation of fun(a) = 25;
In fun(a) = 25;, because fun returns a reference, it behaves as if a itself is being assigned a 
new value. The function call fun(a) returns a reference to a, so fun(a) = 25; is equivalent to 
a = 25;.

This pattern of returning a reference is useful when you want to allow a function to 
modify its caller's variable directly.
*/