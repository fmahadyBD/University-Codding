/*
Mahady Hasan Fahim 
22-11-2022
Math 105

*/
     /*"Determine the coefficients of the given polynomial\n
p(x) = a0 + a1x + a2x^ 2\n

Whose graph passes through the points (1, 3), (2, 69) and (3,8). Also
plot the function using c command (having proper title, x and y axis notation)*/
#include<stdio.h>
 #include <windows.h>
void solution( int a[][20], int var );
int main()
{

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(h, 6);
    printf("Name: Mahady Hasan Fahim\n");
    SetConsoleTextAttribute(h, 3);
    
 
    int a[ 20 ][ 20 ], var, i, j, k, l, n;
    printf( "\n Number of variables:\n" );
    scanf( "%d", &var );
 
    for ( i = 0;i < var;i++ )
    {
        printf( "\nEnter your  equation %i:\n", i + 1 );
 
        for ( j = 0;j < var;j++ )
        {
            printf( "Enter the coefficient of  x%i:\n", j + 1 );
            scanf( "%d", &a[ i ][ j ] );
        }
 
        printf( "\nEnter the constant number:\n" );
        scanf( "%d", &a[ i ][ var] );
    }
 
    solution( a, var );
    return 0;
}
 
 
 
void solution( int a[ 20 ][ 20 ], int var )
{
    int k, i, l, j;
 
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
 
    printf( "\n\tAnswer is: " );
    
 
    for ( i = 0;i < var;i++ )
    {
        printf( "\nvalue x%d is -> %f\n", i + 1, ( float ) a[ i ][ var ] / ( float ) a[ i ][ i ] );
    }
 
}
