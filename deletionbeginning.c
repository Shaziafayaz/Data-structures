#include <stdio.h>

int main() {
    int arr[10], n, i;

    
    printf("Enter number of elements: ");//size of elements eg 10
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);// now write elements eg 10 20 30 40
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n-1; i++) //delete first element
    {
        arr[i] = arr[i+1];   // shift left
    }

    n--; // reduce size of array6
    

    
    printf("Array after deleting first element: ");//after deletion
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
