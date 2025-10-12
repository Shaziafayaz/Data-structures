#include <stdio.h>
int main() 
{
    int arr[10], n, i;

    printf("Enter number of elements: ");//enter no of elements
    scanf("%d", &n);

    printf("Enter %d elements:\n", n); //enter elements
    for(i = 0; i < n; i++)   
        scanf("%d", &arr[i]);

    if(n<=0){
        printf("Array is empty, nothing to delete.\n"); // if n is 0 or negative
 }
    else{
    n--;  //delete last element
    }
    printf("Array after deleting last element: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
