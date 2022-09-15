#include<stdio.h>
//Add two numbers using call by reference
int sum(int*x,int* y){
    printf(" The *x %d\n",*x);
    printf(" The *x %d\n",x);

    int c=*x+*y;
}
int main(){
    int a,b,c,*f1,*f2;
    scanf("%d %d,&a,&b");
    f1=&a;
    f2=&b;
    c=sum(f1,f2);
    printf("The sum is %d",c);
}