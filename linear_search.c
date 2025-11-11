#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, key = 30;
    int pos = linearSearch(arr, n, key);
    if (pos != -1)
        printf("Element found at index %d\n", pos);
    else
        printf("Element not found\n");
    return 0;
}
