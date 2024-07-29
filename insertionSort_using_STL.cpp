#include <iostream>
#include <algorithm> 
#include <vector>    
using namespace std;

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> arr(size); 

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    stable_sort(arr.begin(), arr.end());

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


