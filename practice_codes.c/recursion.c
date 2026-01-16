#include<stdio.h>
int calculatepercent(int sci,int math,int sanskrit);

int main()
{
    int sci=67;
    int math =89;
    int sanskrit= 78;
    printf("percentage:%d",calculatepercent(sci,math,sanskrit)); 
return 0;
}
int calculatepercent (int sci,int math,int sanskrit){
return(sci+math+sanskrit)/3 ;
}