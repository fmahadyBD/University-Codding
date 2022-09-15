#include<stdio.h>
int main(){
 int c=0;
char ab[100];
int i,j,t;
printf("INPUT:\n");
gets(ab);
for(t=0;ab[t]!='\0';t++);
for(c=0;ab[c]!=' ';c++);

for(j=c-1;j>=0;j--){
    
 printf("%c",ab[j]);
}printf(" ");
for(i=t;ab[i]!=' ';i--){
    
 printf("%c",ab[i]);
 
}
 }
