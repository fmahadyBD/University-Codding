#include<stdio.h>

int main()
{
    char st[100];
    int i,j;
    printf(" Enter a Input:\n ");
    gets(st);
    for(i=1;st[i]!='\0';i++);
    for(j=i;j>=0;j--)
    {
        printf("%c",st[j]);
    }

}