#include<stdio.h>
int main(){
    int i;
    char ab[100];
    fgets(ab,sizeof(ab),stdin);
    for(i=0;ab[i]!='\0';i++);
    printf("%d",i-1);
}