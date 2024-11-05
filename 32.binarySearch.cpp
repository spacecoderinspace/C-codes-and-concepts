/*
#include <iostream>
using namespace std;
int main()
{
    int n,i,key,mid,l=0;
    cout<<"enter the number for size of array";
    cin>>n;
    int h=n-1;
    int a[n];
    cout<<"Enter Numbers :";   //Array must be sorted to use Binary Search
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the Number to be Searched in the Arrray";
    cin>>key;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==a[mid]){cout<<"Found at"<<mid; return 0;} 
        else if(key<a[mid])h=mid-1;
        else l=mid+1;
    }
    cout<<"Not Found";
}    
*/
// We can also sort the algorithm after taking Input
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,key,mid,l=0;
    cout<<"enter the number for size of array";
    cin>>n;
    int h=n-1;
    int a[n];
    cout<<"Enter Numbers :";   //Array must be sorted to use Binary Search
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);             //sorting the array after taking Inputs
    cout<<"Enter the Number to be Searched in the Arrray";
    cin>>key;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==a[mid]){cout<<"Found at"<<mid; return 0;} 
        else if(key<a[mid])h=mid-1;
        else l=mid+1;
    }
    cout<<"Not Found";
}    