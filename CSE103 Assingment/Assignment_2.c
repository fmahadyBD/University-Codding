#include <stdio.h>
int FunRC(char *prtp)
{
 static int length=0;
 
 if(*prtp!='\0')
 {
 length++;
 FunRC(++prtp);
 }
 else
 {
 return length;
 }
}


int main()
{
 char a[100];
 int l=0;
 
 printf("SIMPLE:\n");
 
 gets(a);
 
 l=FunRC(a);
 
 printf("SIMPLE OUTPUT: %d\n",l);
 return 0;