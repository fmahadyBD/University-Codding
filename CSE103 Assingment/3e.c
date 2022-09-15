#include<stdio.h>


void sp(int x,int y){
    int t,k;
    k=x-y;
    for(t=0;t<k;t++){
        printf(" ");
    }
   

}

int main(){
    int i;
    int x,y,z,j;
    char a[100];
    char b[100];
    char c[100];
    fgets(a,sizeof(a),stdin);
    for(i=0;a[i]!='\0';i++){
    x=i-1;
    }

    fgets(b,sizeof(b),stdin);
    for(i=0;b[i]!='\0';i++){
    y=i-1;
    }
    fgets(c,sizeof(c),stdin);
    for(i=0;c[i]!='\0';i++){
    z=i-1;
    }
    
    if(x>y && x>z);
    j=x;
    if(y>z && y>x)
    j=y;
    if(z>x && z>y)
    j=z;
    
    sp(j,x);
    puts(a);
    sp(j,y);
    puts(b);
    sp(j,z);
    puts(c);

}