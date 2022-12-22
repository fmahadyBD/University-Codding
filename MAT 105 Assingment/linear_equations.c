/*
Mahady Hasan Fahim 
22-11-2022
Math 105

*/


 #include<stdio.h>
 #include <windows.h>
 #include<stdlib.h>


void solution( int a[][20], int var );
int main()
{

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(h, 6);
    printf("Name: Mahady Hasan Fahim\n");
    SetConsoleTextAttribute(h, 3);
    
 
    int a[ 20 ][ 20 ], var, i, j, k, l, n;
    printf( "\nEnter the number of variables:\n" );
    scanf( "%d", &var );
 
    for ( i = 0;i < var;i++ )
    {
        printf( "\nEnter the equation%d:\n", i + 1 );
 
        for ( j = 0;j < var;j++ )
        {
            printf( "Enter the coefficient of  x%d:\n", j + 1 );
            scanf( "%d", &a[ i ][ j ] );
        }
 
        printf( "\nEnter the constant:\n" );
        scanf( "%d", &a[ i ][ var] );
    }
 
    solution( a, var );
    return 0;
}
 
 
 
void solution( int a[ 20 ][ 20 ], int var )
{
    int k, i, l, j,d;
 
    for ( k = 0;k < var;k++ )
    {
        for ( i = 0;i <= var;i++ )
        {
            l = a[ i ][ k ];
 
            for ( j = 0;j <= var;j++ )
            {
                if ( i != k )
                a[i][j] = (a[k][k]*a[i][j])-(l*a[k][j]);
            }
        }
    }
 
    printf( "\n\tThe solve is: ");
    
 for(int x=0;x<var;x++){
    d=0;
    for(int o=0;o<var;o++){
        if(a[x][o]==0){
            d++;
        }
        
    }

    if(d==var){
            printf("  this system has infinitely many solutions\n");
            exit(0);
        }
 }
    for ( i = 0;i < var;i++ )
    {
        printf( "\nTHE VALUE OF x%d IS %f\n", i + 1, ( float ) a[ i ][ var ] / ( float ) a[ i ][ i ] );
     
    }
 

 
}