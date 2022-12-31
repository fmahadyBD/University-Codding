#include<stdio.h>


int x,y,z,i,j;

int sp(int x,int y){
    int t,k;
    k=x-y;
    for(t=0;t<=k;t++){
        printf(" ");
    }
   
}

int main(){
    char a[100];
    char b[100];
    char c[100];
    scanf("%s",a);
    x=sizeof(a);
    y=sizeof(b);
    z=sizeof(c);
    printf("%d",x);
    if(x>y && x>z);
    j=x;
    if(y>z && y>x)
    j=y;
    if(z>x && z>y)
    j=z;
    sp(z,x);
    puts(a);

}
