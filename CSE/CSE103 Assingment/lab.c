#include <stdio.h>
#include <stdlib.h>

int main () {
int a,i,b;
scanf("%d",&a);
for(i=0;i<5;i++){
        b=a;
       a=b%10;
        printf("%d\n",a);
       b=b/10;
       a=b;
     //  printf("%d\n",b);
  
}}