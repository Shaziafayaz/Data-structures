#include<stdio.h>

void square  (int n);
void  _square (int * n);

int main(){
    int num =5;
    square(num);
    printf(" num :%d",num);
_square (&num);
printf(" num :%d",num);

return 0;
}

//call by value
void square(int n){
    n=n*n;
    printf("sq= %d",n);

}
//call by refrence
void _square (int * n){
    *n =(*n) * (*n);
    printf("sq= %d",*n);
}
