#include<stdio.h>

int rs(char *pr){
int c=0;
if(*pr!=NULL){

c++;
rs(++pr);

}
else{
    return c;
}


}

int main(){
    char ar[100];
    gets(ar);
   rs(ar);

}