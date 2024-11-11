/*
Types of error:-

1). Syntax Error - Error in the syntax of a program, Compiler will Identify this error.
2). Logical Error - Output given is not expected.Due to wrong procedure written.Solved via Debugging.
3). Runtime Error - Error occured during runtime of a program. No Syntax Error & No logical error.
              Occurs due to --Bad Input
                            --Problem with Resources  
                              i.e. When Mishandeled By User.
# In case of Runtime Error, Program crashes/stops abruptly/Suddenly stops without completing 
execution.

#Objective of Exception Handling -- Giving a Proper message to the user Informing about the Exact 
Problem, and providing Guidance to solve it.

Exception Handling Construct
-----------------------------
Inside Try Block, If there is any Error then
It will Jump to the catch block and execute the statements inside catch block.
If Error is in 2nd line, 3rd and 4th line wouldn't be executed and will directly jump to catch block.

#It doesn't matter what is it that you are throwing just throw something and same datatype 
should be put in catch block, and display your message inside the catch block.
Throw catch is just so that we can have a link between the point error occurs and connecting 
it to the code that tells what to show as error. You can do error code as well.


# If there is no error inside try block.
      Then, Catch block will not execute.

*/
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 0, c;
    try {
        if (b == 0) {
            throw 2; // This throw statement will transfer control to the catch block.
        }
        c = a / b; // This line is skipped because of the throw statement.
        cout << c;
    }
    catch (int e) { // Catch block to handle the thrown exception.
        cout << "Division by Zero" << endl;
    }
    return 0;
}
/*
1). Throwing an Exception:

Inside the try block, the code checks if b is zero. If true, it throws an integer 2. This integer is 
used as an error code and will be caught in the catch block.

2). Catching the Exception:

The catch block catches an integer exception (matching the type of the thrown exception) and executes
when throw is called with an integer.
Inside the catch block, the message "Division by Zero" is printed, indicating that the exception was 
handled correctly.


3).Why throw and catch are Used:

The throw statement allows the program to signal an error when dividing by zero.
The catch block provides a way to handle that error gracefully without crashing the program.
*/