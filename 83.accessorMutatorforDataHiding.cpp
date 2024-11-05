/*
By Default, Every member in a class is private only and now we will let data members 
stay private only and make the functions Public
*/
#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    void setLength(int l){
        if(l>0) length=l; //if condition is validating the  data
        else length=1;
    }
    void setBreadth(int b){  //mutators or setters
        if(b>0) breadth=b;
        else breadth=1;
    }
    int getLength(){       //accessors or getters
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
int main(){
    Rectangle r;
    r.setLength(10);
    r.setBreadth(-1); //-1 will be converted to 1 
    cout<<r.area();
    cout<<endl<<r.getBreadth();
}