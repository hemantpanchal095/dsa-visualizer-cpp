#include <iostream>
using namespace std;

void binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        cout << "Low: " << low << " High: " << high
             << " Mid: " << mid << " Value: " << arr[mid] << endl;

        if(arr[mid] == target) {
            cout << "Found at index " << mid << endl;
            return;
        }
        else if(arr[mid] < target) {
            cout << "Move Right\n";
            low = mid + 1;
        }
        else {
            cout << "Move Left\n";
            high = mid - 1;
        }
    }

    cout << "Not Found\n";
}
