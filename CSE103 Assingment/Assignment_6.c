# include <stdio.h>
# include <string.h>
int main( )
{
    
 int StR[300];
 int i;
FILE *fPointer;
 fPointer =fopen("Assingment_Texe.txt","r");
 char CharS[300];

 
 while(!feof(fPointer)){
 fgets(CharS,300,fPointer);
 
 }
fclose(fPointer);
for(i=0;CharS[i]!='\0';i++){
 
StR[i]=CharS[i]-7;
 printf("%c",StR[i]);
}
return 0;
}