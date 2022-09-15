//Write a program in C to add two numbers using pointers.

#include<stdio.h>
int main(){

    int f1,f2,*a,*b,sum;
    scanf("%d %d",&f1,&f2);
    a=&f1;
    b=&f2;
    sum=*a+*b;
    printf("The sum=%d",sum);


}