#include<stdio.h>


char *rc(char* b){

    int sum=0;
    int i;
 
    if(b[i]!='\0'){
        return sum+rc(sum-1);

    }else{
       
        printf("%d",sum);
    }
}

int main(){
    char ab[100];
    int i,a,b;
fgets(ab,sizeof(ab),stdin);



   rc(ab);

}