//

#include <stdio.h>
#include<math.h>

int main() {
  int a,b,c,f,l;
  
  scanf("%d",&a);
  c=log10(a);
  printf("\nthe total number of digits %d",c+1);
  l=a%10;
  f=a/pow(10,c);
  printf("\n first number %d \n",f);
  printf("\n lsat number %d\n",l);
  
    return 0;
}
