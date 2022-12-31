#include<stdio.h>
int Recur(int n){
 if(n==0){ 
    
    return 0;

 }else{
printf("%d",(n%2));
    return Recur(n/2);
}
}
int main(){
int inputt;
scanf("%d",&inputt);
Recur(inputt);

}