//Write a program in C to Calculate the length of the string using a pointe

#include<stdio.h>
int point_recevr(char *a){
int count=0;
while(*a!='\0'){
    count++;
    a++;

}
return count;
}
int main(){

    char aa[10];
    scanf("%s",aa);
    
    printf("%d",point_recevr(aa));

}