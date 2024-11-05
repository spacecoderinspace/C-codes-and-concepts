#include<iostream>
using namespace std;
class Car{
    public:
    virtual void start(){
        cout<<"car started";

    }
    virtual void stop(){
        cout<<"car stopped";
    }
};
class Innova: public Car{
    public:
    void start(){
        cout<<"Innova Started";
    }
    void stop(){
        cout<<"Innova Stopped";
    }
};
class Swift:public Car{
    public:
    void start(){
        cout<<"Swift Started";
    }
    void stop(){
        cout<<"Swift stopped";
    }
};
int main(){
    Car *c=new Innova();
    c->start();
    c=new Swift();
    cout<<endl;
    c->start();
}
/*
c->start() is giving two differet outputs on 2 different calls. this is POLYMORPHISM.
 Also, as Car is general term and dont really exist (As discussed in Generalisation.) and It would
 not have any real Objects, Any real objects will be either of Innova or swift or corella or BMW, etc
 
 So, We do not really need to write its body of function.
 i.e.  
 class car{
    public:
    virtual void start();
    virtual void stop(); 
 }; 



*/