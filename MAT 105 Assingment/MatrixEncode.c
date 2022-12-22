/*
Mahady Hasan Fahim 
22-11-2022
Math 105

*/

#include <stdio.h>
#include <windows.h>


int main()
{


     HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 6);
    printf("Name: Mahady Hasan Fahim\n");
    SetConsoleTextAttribute(h, 3);
    
    int t2d[100], encode[100];
    int i, j, i1 = 0, j1 = 0;
 
    char s[100]="OMY FAVOURIATE BOK IS NOTHINGS";
      int key[3][3] = {
        {1, -1, 1},
        {1, 1, 0},
        {1, 2, 1}};
 
    i=0; 
while(s[i]!='\0') 
{
        if (s[i] == ' ')
        {
            t2d[i] = 0;
        }
        else if (s[i] < 'A' || s[i] > 'Z')
        {
            t2d[i] = 27;
        }
        else
        {
            t2d[i] = s[i] - 64;
        }
        i++; 
} 
 
    j1=0; j=0; 

    while(j1<i) 
{
        encode[j1] = (t2d[j] * key[0][0]) + (t2d[j + 1] * key[1][0]);
        j1++;
        encode[j1] = (t2d[j] * key[0][1]) + (t2d[j + 1] * key[1][1]);
        j1++;
        j = j + 2; 
} 
printf("The Encode is: \n");
SetConsoleTextAttribute(h, 4);
    for(j=0; j<i; j++) {
        printf("%d ", encode[j]); 
}
}
