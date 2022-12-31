#include<stdio.h>

int Recur(int n){

    if(n==0){
        return 0;
    }else
    return (n%2)+10*Recur(n/2);
}

int main(){
int inputt;



scanf("%d",&inputt);
printf("%d",Recur(inputt));


}