/*#include<iostream>
using namespace std;
int main(){                                         Issue Iwith this code is it prints the number in loop
    int n;
    cout<<"Enter the Number";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0)cout<<"Not a Prime Number";
        else cout<<n<<"is a Prime number";
    }
}
#include<iostream>
using namespace std;
int main(){                                        
    int n,i,count=0;
    cout<<"Enter the Number";
    cin>>n;
    for(i=1;i<n;i++){
        if(n%i==0) count++;
    }
    if(count==2) cout<<"Its a Prime";
    else cout<<"not a prime";
}

*/


#include <iostream>
using namespace std;

int main() {
    int n, i;
    bool isPrime = true;

    cout << "Enter the Number: ";
    cin >> n;

    if (n <= 1) {
        isPrime = false; // 0 and 1 are not prime numbers
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = false; // If n is divisible by any number other than 1 and itself
                break;
            }
        }
    }

    if (isPrime) {
        cout << "It's a prime number." << endl;
    } else {
        cout << "Not a prime number." << endl;
    }

    return 0;
}
