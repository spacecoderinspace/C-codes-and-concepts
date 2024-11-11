#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream obj("153.write0.txt", ios::app);
    obj << "John" << endl;
    obj << 25 << endl;
    obj << "ECM" << endl;
    obj.close();
}