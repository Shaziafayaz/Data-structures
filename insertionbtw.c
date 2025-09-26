#include <stdio.h>
int main() {
    int arr[10] = {10, 20, 30, 40};
    int n = 4, pos = 2, x = 25;  // insert at index 2

    for (int i = n; i > pos; i--)  // shift right
        arr[i] = arr[i-1];

    arr[pos] = x;
    n++;

    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
