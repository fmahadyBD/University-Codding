#include<stdio.h>
int Input_Number();
char character_extractor(int n);

char password_generator(char charactars[]);

int main(){
 int number,j,rem;
 char character[5];
 number = Input_Number();
 if(number == 0){
 printf("Wrong input");
 return 0;
 }
 for(j=0; j<5; j++){
 rem = number % 10;
 number = number / 10;
 character[j] = character_extractor(rem);
 }
 password_generator(character);
 return 0;
}
int Input_Number(){
 int number,j,temporary;
 scanf("%d", &number);
 temporary = number;
 j=0;
 while(temporary != 0){
 temporary = temporary / 10;
 j++;
 }
 if(j == 5){
 return number;
 }else {
 return 0;
 }
};
char character_extractor(int n){
 if(n == 1){
 return '#';
 }else if(n == 2){
 return 'a';
 }else if(n == 3){
 return 't';
 }else if(n == 4){
 return 'j';
 }else if(n == 5){
 return '9';
 }else if(n == 6){
 return 'E';
 }else if(n == 7){
 return '@';
 }else if(n == 8){
 return '2';
 }else if(n == 9){
 return 'F';
 }else if(n == 0){
 return '?';
 }
}
char password_generator(char charactars[]){
 int j;
 for(j=4; j>=0; j--){
 printf("%c", charactars[j]);
 }
}