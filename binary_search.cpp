#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int key) {
    while(left <= right) {
        int mid = left + (right - left) / 2;

        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, key = 40;

    int result = binarySearch(arr, 0, n - 1, key);

    if(result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";

    return 0;
}
