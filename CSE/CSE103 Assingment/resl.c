#include<stdio.h>


int rs(char *is){
int length=0;
if(*is!='\0'){

        length++;
        rs(++is);
    }
    else
    {
        return length;
    }


int main(){

char a[100];
printf("INPUT:\n");
gets(a);
int b=rs(a);

}