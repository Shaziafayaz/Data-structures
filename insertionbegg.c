#include <stdio.h>
int main() {
    int arr[10] = {10, 20, 30, 40};
    int n = 4, x = 5;  

    for (int i = n; i > 0; i--)
        arr[i] = arr[i-1];

    arr[0] = x; 
    n++;

    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
