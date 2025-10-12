#include <stdio.h>

int main() {
    int arr[10] = {5, 10, 15, 20};
    int n = 4;  // number of elements
    int value, i;

    printf("Enter element to insert at end: ");
    scanf("%d", &value);

    arr[n] =value;  // place at end
    n++;             // increase size

    printf("Array after insertion at end: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}