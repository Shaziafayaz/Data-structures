#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40};
    int n = 4, i, value = 5;

    for(i = n; i > 0; i--) {  // shift right
        arr[i] = arr[i-1];
    }

    arr[0] = value;  // insert at beginning
    n++;

    printf("Array after insertion at beginning: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
