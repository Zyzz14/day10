#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Reversed Array: ";
    // for (int i = size - 1; i >= 0; i--) {
    //     cout << arr[i] << " ";
    // }cout << endl;
           
    return 0;
}

/*
    input: 1 2 3 4 5
    ouput: 5 1 2 3 4
           5 4 1 2 3
           5 4 3 1 2
           5 4 3 2 1
           
*/