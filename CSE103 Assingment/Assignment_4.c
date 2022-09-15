#include<stdio.h>

int Input_Number(){
 int a;
 scanf("%d",&a);
 if(a/10000>=1 &&a/10000<=9){
 return a;
 }else{
 printf("WRONG");
 exit(0);
 }
};
char password_generator(char charactars[]){
 int j;
 for(j=4; j>=0; j--){
 printf("%c", charactars[j]);
 }
}

char character_extractor(int a){
 
 switch(a){
 case 1:
 return '#';
 break;
 case 2:
 return 'a'; 
 break;
 case 3:
 return 't';
 break;
 case 4:
 return 'j';
 break;
 case 5:
 return '9';
 break;
 case 6:
 return 'E';
 break;
 case 7:
 return '@';
 break;
 case 8:
 return '2';
 break;
 case 9:
 return 'F';
 break;
 case 0:
 return '?';
 break;
 default:
 break;
 }
}


int main(){
 int number,j,r;
 char character[5];
 number = Input_Number();
 for(j=0; j<5; j++){
 r = number % 10;
 number = number / 10;
 character[j] = character_extractor(r);
 }
 password_generator(character);
 return 0;
}



