/*#include<iostream>
using namespace std;
int main(){
    int a[7]={21,32,2,3,789,1};
    int max=a[0];
    for(int i=0;i<7;i++){                        //Using For Loop
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<"Maximum Num is :"<<max;
}*/


#include <iostream>
using namespace std;

int main() {
    int a[7] = {21, 32, 2, 3, 789, 1};
    int max = a[0];

    for (int num : a) {                   // Using for-each loop
        if (num > max) {
            max = num;
        }
    }

    cout << "Maximum Num is: " << max;
    return 0;
}
