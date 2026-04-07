#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n);
void selectionSort(int arr[], int n);
void binarySearch(int arr[], int n, int target);

int main() {
    int choice;

    while(true) {
        cout << "\n====== DSA VISUALIZER ======\n";
        cout << "1. Bubble Sort\n";
        cout << "2. Selection Sort\n";
        cout << "3. Binary Search\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 4) break;

        int n;
        cout << "Enter size: ";
        cin >> n;
        if(choice==3){
            cout << "NOTE: Array must be sorted!\n";
        }
        int arr[n];
        cout << "Enter elements:\n";
        for(int i = 0; i < n; i++) cin >> arr[i];

        if(choice == 1) {
            bubbleSort(arr, n);
        }
        else if(choice == 2) {
            selectionSort(arr, n);
        }
        else if(choice == 3) {
            int target;
            cout << "Enter target: ";
            cin >> target;
            binarySearch(arr, n, target);
        }
        else {
            cout << "Invalid choice\n";
        }
    }

    return 0;
}
