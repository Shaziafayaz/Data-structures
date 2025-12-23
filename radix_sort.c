#include <stdio.h>

 
int getMax(int arr[], int n) \\Get maximum element
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

 
void countingSort(int arr[], int n, int exp) {
    int output[100];
    int count[10] = {0};

    
    for (int i = 0; i < n; i++) // Count occurrences
        count[(arr[i] / exp) % 10]++;

    
    for (int i = 1; i < 10; i++) // Cumulative count
        count[i] += count[i - 1];

    
    for (int i = n - 1; i >= 0; i--)// Build output array 
     {
        int digit = (arr[i] / exp) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    
    for (int i = 0; i < n; i++) // Copy back
        arr[i] = output[i];
}


void radixSort(int arr[], int n) {
    int max = getMax(arr, n);

    for (int exp = 1; max / exp > 0; exp *= 10)
        countingSort(arr, n, exp);
}

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    radixSort(arr, n);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}