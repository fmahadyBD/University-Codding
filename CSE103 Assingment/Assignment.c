#include <stdio.h>
int t=0;

int main() {
 int number_of_words;
 char words[50][50];


 int c=0,j,k=0,y,w;
 
 printf("Enter number of words:");
 scanf("%d", &number_of_words);
 printf("Enter words:\n");
 int i;
 for (i = 0; i < number_of_words; i++) {
 scanf("%s", words[i]);


 }


 for (i = 0; i < number_of_words; i++) {
 c=0;
 for(j=0;words[i][j]!='\0';j++){
    c=j;
 }
 

 if(c>k){
 t=c;
 }else{
 c=k;
 }
 k=c;

 }
 printf("\nOutput:\n");
 for (i = 0; i < number_of_words; i++) {
 for(j=0;words[i][j]!='\0';j++){


 }
 y=t-j;
 for(w=0;w<=y;w++){
 printf(" ");
 }
 printf("%s\n", words[i]);
 }

 return 0;

}