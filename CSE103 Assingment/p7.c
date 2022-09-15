//Write a program in C to store n elements in an array and print the elements using pointer.
#include<stdio.h>
int main(){
int a,ab[100];
int  *s[10];
int i;
for(i=0;i<=2;i++){
    scanf("%d",&ab[i]);
    s[i]=&ab[i];
}
for(i=0;i<=2;i++){
    printf("%d\n",s[i]);
}


}