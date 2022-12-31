#include<stdio.h>
#include<math.h>
int main(){

int i ,t,sum;
float x;
printf("enter the time");
scanf("%d",&t);
for(i=0;i<=t;i++)
{

    x = pow(1.442,i);

printf("%f\n",x);

}


sum =694*x;

printf("the sum of number is : %d",sum);







}