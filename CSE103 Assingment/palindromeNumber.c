#include<stdio.h>
int main(){
    int sum=0;
    int a,tem,r;
    scanf("%d",&a);
tem=a;
    while(a>0){
        r=a%10;
        a=a/10;
        sum=(sum*10)+r;
    }
    if(sum==tem){
        printf("Palindrome!");
    }else{
        printf("Not palindrome");
    }
}