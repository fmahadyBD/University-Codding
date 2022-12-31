#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int ch;
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
int character_extractor(int a){
    ch;
    switch (a)
{
case 1:
     ch=35; return ch;
//#=35
//    password_generator(ch);
    break;
case 2:
ch=97;
//a=97
//  password_generator(ch);
   return ch;
    break;
case 3:
ch= 116;
//t==116   
//    password_generator(ch);  
 return ch;
    break;
 case 4:
ch=106;//j
//    password_generator(ch); 
 return ch;
    break;
case 5:
ch= 57;//9   
//    password_generator(ch); 
 return ch;
    break; 
case 6:
 ch= 69;//E
//    password_generator(ch); 
 return ch;
    break; 
case 7:
ch=63;//@
//    password_generator(ch); 
 return ch;
    break; 
case 8:
ch= 50;//2  
//    password_generator(ch); 
 return ch;
    break; 
case 9:
ch=70; return ch;
//F=70;  
//    password_generator(ch); 
    break;   
case 0:
//?=63
   ch=63;   return ch;
//    password_generator(ch); 
    break; 

default:
    break;
}

}
int password_generator(){
    int yx=character_extractor();

printf("%c",yx);



}


int main(){
    int recived,a;
    int i;
    int star[5];
    
    recived=INPUT_NUMMBER();
    for(i=0;i<5;i++){
        a=recived;
        recived=a%10;
        star[i]=recived;
        character_extractor(star[i]);
        a=a/10;
        recived=a;

    }
    



}