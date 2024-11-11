/*
Static members can be used as Counter.
Static members can be used as shared memory for all the objects
It can provide Information about the class.
*/
#include<iostream>
using namespace std;

class Student {
    public:
    int roll_no;
    static int admissionNo;
    Student() {
        admissionNo++;
        roll_no = admissionNo;
    }
    void display() const {
        cout << "Student Roll No: " << roll_no << endl;
    }
};

int Student::admissionNo = 0; // Initialize the static member

int main() {
    Student s1, s2;
    s1.display();
    s2.display();

    cout << "Total Admissions: " << Student::admissionNo << endl;
}