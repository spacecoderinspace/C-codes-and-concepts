#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int arr[rows][cols];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "The elements of the array are:\n";
    int i = 0; 
    while (i < rows) {
        int j = 0; 
        while (j < cols) {
            cout << arr[i][j] << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
