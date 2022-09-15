#include<stdio.h>
int main(){

    int a,b=0,rm=0,c=1;
    scanf("%d",&a);

    while (a)
    {
       rm=a%2;
       a=a/2;
       b=b+(rm*c);
       c=c*10;

    }
    
printf("%d",b);

}