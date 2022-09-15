


#include<stdio.h>
int main()
{
    char text[1000];
    int count,tag;
    count=0;
    while((text[count++]=getchar())!=EOF)

    {
    while((text[count]=getchar())!='\n')
        count++;
    tag=count;
    count=0;
    while(count<tag)
    {
     printf("%c",text[count]-7);
    count++;
    }
    printf("\n");
    count=0;
    }
    return 0;
}