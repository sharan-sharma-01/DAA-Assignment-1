#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = 10, target = 23;
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            cout << "Element found at index " << mid;
            return 0;
        } else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << "Element not found";
    return 0;
}
