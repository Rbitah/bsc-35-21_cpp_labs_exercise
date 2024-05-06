#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows (not exceeding 3): ";
    cin >> rows;

    while (rows <= 0 || rows > 3) {
        cout << "Invalid input. Please enter a value between 1 and 3: ";
        cin >> rows;
    }

    cout << "Enter number of columns (not exceeding 3): ";
    cin >> cols;

    while (cols <= 0 || cols > 3) {
        cout << "Invalid input. Please enter a value between 1 and 3: ";
        cin >> cols;
    }

    double** array = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new double[cols];
    }

    cout << "Enter values for the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    cout << "\nThe array elements are:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
 
    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
