/*Under certain conditions, cane sugar is converted into dextrose at a rate, which is proportional
to the amount unconverted at any time. If out of 75 grams of sugar at t = 0, 8 grams are
converted during the first 3 minutes, find the amount converted in 1.5 hours.
*/


#include<stdio.h>
#include<math.h>
int main()
{
    printf("\nLet M be the amount of cane sugar initially");
    printf(" m be the amount of cane sugar converted into dextrose,\n\n");
    printf("                dm/dt=k(M-m)\n\n");
    double m=0, m0=70, m3=6, t0=0, t3=3, t90=90;
    printf("Given that,\n\nInitial mass is = %.2lf\n\n", m0);
    printf("Mass after 3 minute = %.2lf\n\n", t3);
    double k = -(log((m0-m3)/m0))/t3;
    double M = m0 - (m0 * (exp(-t90*k)));
    printf("Proportional constant k = %lf\n\n",k);
    printf("Amount of cane sugar converted into dextrose = %lf\n\n",M);
    return 0;
}

