#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50}, n = 5, key = 40;
    int low = 0, high = n - 1, mid, found = 0;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            printf("Found at index %d", mid);
            found = 1;
            break;
        }
        if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    if (!found) printf("Not found");
    return 0;
}
