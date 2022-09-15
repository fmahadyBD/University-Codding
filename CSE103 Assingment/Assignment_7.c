# include <stdio.h>
# include <string.h>
int main( )
{
    
 int StR[300];
 int i;
char CharS[300];
printf(" Enter your massage:\n");
gets(CharS);
for(i=0;CharS[i]!='\0';i++){
 
StR[i]=CharS[i]+19;
 printf("%c",StR[i]);
}
 

return 0;
}