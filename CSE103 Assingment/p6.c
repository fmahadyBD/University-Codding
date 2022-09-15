#include<stdio.h>
// Write a program in C to find the maximum number between two numbers using a pointer.
int main(){

    int a,b,*f1=&a,*f2=&b;
    scanf("%d%d",&a,&b);
    if(*f1>*f2){
        printf("maximu number %d",*f1);
       
    }else{
        printf("maximu number %d",*f2);


    }

}