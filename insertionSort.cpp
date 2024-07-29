/*
1. start with second element.
2. Compare it to element before it
3. Insert it in the correct position.
4. repeat for all elements
*/

#include <iostream>
using namespace std;

void insertionSort(int arr[], int size){
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    insertionSort(arr, size);

    return 0;
}
