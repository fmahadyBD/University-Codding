#include<stdio.h>
int cunt=0;
int rs(char *pr){

if(*pr!='\0'){
    cunt++;
    rs(++pr);
}else{

    return cunt;
}

}

int main(){
    int s;
 char ar[100];
 gets(ar);
 s=rs(ar);
 printf("%d",s);

}