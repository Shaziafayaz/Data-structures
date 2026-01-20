#include<stdio.h>
int main(){
    int age= 22;
    int *ptr =&age;
    //format specifer
 
   // printf("%u",&age);
    //printf("%p",&age);  can use u for unsigned int 
   // printf("%p",ptr);
  // printf("%u",&ptr);



  //valure print
  printf("%d",age);
  printf("%d",*ptr);
printf("%d",*(&age));

return 0;
}