//the swap number is 

#include <stdio.h>
#include<math.h>

int main() {
  int a,b,c,f,l,m,n,k,o;
 
  scanf("%d",&a);
  m=a;
  c=log10(a);
  printf("\nthe total number of digits %d",c+1);
  l=a%10;
  f=a/pow(10,c);
  printf("\nfirst number %d \n",f);
  printf("last number %d\n",l);
  
  m=pow(10,c);

  n=a%m;
  
  n=n/10;
  //printf("The mid number is %i\n",n);
  o=(n*10)+f;
  o=o+(l*m);
  printf("The result %d\n",o);
  
    return 0;
}