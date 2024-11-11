/*
Exception Handling is more useful in between the functions otherwise Checking Error is possible 
using If and Else also.

Actual purpose of try, catch throw.
------------------------------------------
When we call a function that function returns a result, and in case of function not being able 
to return the result
then function should be able to inform the calling function that there is some problem. 
We want functions to be able to communicate with each other.
So when function is called it should either return the result or it should tell about error.
So we can say that throw catch try is used for communications between functions. If we want 2 functions 
main and division whenever
main calls division to communicate whether result is returned or if exception is there we use 
try catch throw.



*/
#include <iostream>
using namespace std;

int division(int x,int y) {
    if(y==0){
        throw 101; // Throw error code 101 for division by zero
    }
    return x/y;
}

int main(){
    int a=10,b=0,c;
    try{
        c=division(a,b);
        cout<<"Result:"<<c<<endl;
    }
    catch(int e){
        cout<<"Error: Division by Zero.Error code: "<<e<<endl;
    }
    cout<<"Bye"<<endl;
    return 0;
}
/*
Function with Exception (division):
------------------------------------

The division function takes two integers x and y as arguments.
If y is zero, it throws an integer 101 to signal a division-by-zero error. Otherwise, 
it returns the result of x/y.


main Function:
---------------

The try block calls division(a, b), which may throw an exception if b is zero.
If division throws an exception, the catch block catches it and displays an error message 
along with the error code.
After the try-catch block, cout << "Bye"; runs, showing that the program continues execution 
even after handling the exception.
*/