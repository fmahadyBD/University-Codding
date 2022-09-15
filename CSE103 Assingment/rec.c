 
#include <stdio.h>
   int length=0;
//function to calculate length of the string using recursion
int fcr(char *is)
{
  
    if(*is!='\0')
    {
        length++;
        fcr(++is);
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
     
    printf("Simple input:\n");
    gets(a);
     
    l=fcr(a);
     
    printf("Simple output: %d\n",l);
 
    return 0;
}