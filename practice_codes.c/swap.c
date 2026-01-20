#include <stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);
int main()
{
    int x = 3;
    int y = 5;

    _swap(&x, &y);
    printf("x:%d and y:%d\n", x, y);
    return 0;
}

//call by refrence ek function se mutple value return ksrni ho 
void _swap(int *a,int *b){
    int temp= *a;
    *a= *b;
    *b= temp;

}
//call by value no swap
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("a:%d and b:%d\n", a, b);
}
