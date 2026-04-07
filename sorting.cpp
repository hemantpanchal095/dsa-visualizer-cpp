#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        cout << "\nPASS " << i+1 << endl;

        for(int j = 0; j < n-i-1; j++) {
            cout << "Comparing " << arr[j] << " and " << arr[j+1] << endl;

            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                cout << "Swapped: ";
            }

            for(int k = 0; k < n; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int minIdx = i;

        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }

        swap(arr[i], arr[minIdx]);

        cout << "After selecting minimum: ";
        for(int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}
