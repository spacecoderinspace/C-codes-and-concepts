#include<iostream>
using namespace std;
int main(){
    char s[23];
    cout<<"enter ur name :";
   //cin>>s;//cin takes only one word so instead ican use cin.get(s,50)/cin.getline(s,50) 50 max chars
    cin.get(s,33); //It can 33 max characters
    cout<<s;
}
//cin.get or cin.getline will take more than one word AS input
