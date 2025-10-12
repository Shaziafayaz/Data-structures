#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40};
    int n = 4,value, pos, i;

    printf("Enter element to insert: ");
    scanf("%d", &value);
    printf("Enter position (0 to %d): ", n);
    scanf("%d", &pos);

    
    for(i = n; i > pos; i--) //shift right

     {  
        arr[i] = arr[i-1];
    }

                        
    arr[pos] = value;// insert new elemen
    n++;

    printf("Array after insertion in bwtween: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

