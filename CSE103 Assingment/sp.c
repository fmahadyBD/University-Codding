#include<stdio.h>
void sp(int x ,int y){

    int i;
    for(i=0;i<x-y;i++){
        printf(" ");
    }



}

int main(){
int i,j;
int x,y,z;
char a[100];
char b[100];
char c[100];
fgets(a,100,stdin);
fgets(b,100,stdin);
fgets(c,100,stdin);
for(i=1;a[i]!='\0';i++)
x=i;
for(i=1;b[i]!='\0';i++)
y=i;
for(i=1;c[i]!='\0';i++)
z=i;

if(x>y && x>z)
j=x;
if(z>y && z>x)
j=z;
if(y>x && y>z)
j=y;

sp(j,x);
puts(a);
sp(j,y);
puts(b);
sp(j,z);
puts(c);



}