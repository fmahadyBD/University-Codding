/*The rate at which a super computer body cools is proportional to the difference between the
temperatureof the body and that of the surrounding air. If a body in air at 30°C will cool from
100° to 70° in one minute, find its temperature at the end of four minutes.
*/

#include<stdio.h>
#include<math.h>
int main()
{
    printf("\nLet temperature of the body be T,\n\n");
    printf("                dT/dt=k(T-30)\n\n");
    double t0 = 100, tl= 30,  t1 = t0-tl, t3 = 4;
    printf("Given that,\n\nInitial temperature is = %.0lf\n\n", t0);
    printf("Temperature after 1 minute = %.0lf\n\n", t1);
    printf("Temperature difference  = %.0lf\n\n", tl);
    double k = (log((t1-tl)/t1));
    double T = tl + t1 * (exp(k*t3));
    printf("Proportional constant k = %lf\n\n",k);
    printf("Temperature after four minutes = %lf\n\n",T);
    return 0;
}
