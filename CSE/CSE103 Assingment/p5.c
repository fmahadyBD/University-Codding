#include<stdio.h>
//Add two numbers using call by reference

int sum(int *x ,int *y){
    int s;
    s=*x+*y;
    return s;


}
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
   
 c=sum(&a,&b);
 printf("sum %d\n",c);


}