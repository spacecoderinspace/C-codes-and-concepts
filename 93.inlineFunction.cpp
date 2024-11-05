/*
Functions which are expanded in the same line where they are called.{There is no separate block
for that function} Function will be expanded Inline.
Their machine code will be pasted or copied at the place of Function call.

Q).HOW TO MAKE FUNCTION AS IN-LINE FUNCTION
==========================================
1). If you define function body inside Class, Its In-Line Function.
2). We can also make a function In-line which is defined outside Class.
            By writing 'inline' infront of Function Definition. {Then, Even though its written 
outside.} It Becomes In-line and the machine code will not be separately generated.[It will be a 
part of main()]
*/
#include<iostream>
using namespace std;
class Test{
    public:
    void fun1(){
        cout<<"InLine"<<endl;
    }
    inline void fun2();
};
void Test::fun2(){
    cout<<"Also InLine";
}
int main(){
    Test t;
    t.fun1();
    t.fun2();
}