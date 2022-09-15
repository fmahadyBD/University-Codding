#include<stdio.h>
int main(){

char ab[100]="abc xyz";
int i,j;
for(i=0;ab[i]!='\0';i++);
for(j=i;j>=0;j--){
    printf("%c",ab[j]);
}


}