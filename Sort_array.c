#include <stdio.h>

int main() {
    int arr[10], n, i, j, temp;//temp is used for swapping,i j are loopcounter

    printf("Enter number of elements: ");//enter no of elements
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);//enter elements
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    
    for(i = 0; i < n-1; i++) //bubble sort
     {
        for(j = 0; j < n-1-i; j++) {
            if(arr[j] > arr[j+1]) {   // swap if next is smaller
                temp = arr[j];//arrj is 0
                arr[j] = arr[j+1];//
                arr[j+1] = temp;
            }
        }
    }

    printf("Array after sorting in ascending order: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
