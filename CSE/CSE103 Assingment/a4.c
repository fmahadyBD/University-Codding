#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int INPUT_NUMMBER(){
    int a;
    scanf("%d",&a);
    if(a/10000>=1 &&a/10000<=9){
        return a;
    }else{
         printf("WRONG");
        exit(0);

    }
       
        
    
}

void password_generator(int a){

// printf("%d\n",a);
switch (a)
{
case 1:
    printf("#");
    break;
case 2:
    printf("a");
    break;
case 3:
    printf("t");
    break;
 case 4:
    printf("j");
    break;
case 5:
    printf("9");
    break; 
case 6:
    printf("E");
    break; 
case 7:
    printf("@");
    break; 
case 8:
    printf("2");
    break; 
case 9:
    printf("F");
    break;   
case 0:
    printf("?");
    break; 

default:
    break;
}


}


int main(){
    int recived,a;
    int i;
    int star[5];
    char* en[5];
    recived=INPUT_NUMMBER();
    for(i=0;i<5;i++){
        a=recived;
        recived=a%10;
        star[i]=recived;
        password_generator(star[i]);
        a=a/10;
        recived=a;

    }
    



}