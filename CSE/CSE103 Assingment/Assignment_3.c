#include <stdio.h>
int main() {
 static int Gob_t=0;
 int Int_int;
 char IN_char[50][50];
 int c=0,j,k=0,y,l;


 printf("Enter how nubber you wnat to Right alingment:\n");
 scanf("%d", &Int_int);
 printf("Enter Words:\n");
 int i;
 for (i = 0; i < Int_int; i++) {
 scanf("%s", IN_char[i]);
 
 }
 
 
 for (i = 0; i <Int_int; i++) {
 c=0;
 for(j=0;IN_char[i][j]!='\0';j++){
 }
 c=c+j;
 // printf("%d\n",(c=c+j));
 
 if(c>k){
 Gob_t=c;
 }
  k=c;
 

 
 }
 
 for (i = 0; i < Int_int; i++) {
 for(j=0;IN_char[i][j]!='\0';j++){
 
 
 }
 y=Gob_t-j;
 for(l=0;l<=y;l++){
 printf(" ");
 }
 printf("%s\n",IN_char[i]);
 }
 
 return 0;
 
}