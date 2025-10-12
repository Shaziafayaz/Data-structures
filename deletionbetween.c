#include <stdio.h>
int main() {
    int arr[10], n, pos, i;

    printf("Enter number of elements: ");//enter no of elements
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);  //enter elements
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to delete (0 to %d): ", n-1);//postion no to deletee
    scanf("%d", &pos);

    if(pos < 0 || pos >= n) //used or condition,to check valid position
    {
        printf("Invalid position!\n");
    }
     else {
        for(i = pos; i < n-1; i++) //shift left
            arr[i] = arr[i+1];

        n--; // reduce n size

        printf("Array after deletion: ");//after deletion
        for(i = 0; i < n; i++) //after shift values
            printf("%d ", arr[i]);
    }

    return 0;
}
