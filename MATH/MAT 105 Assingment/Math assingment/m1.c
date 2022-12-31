
/*The population of a city increases at a rate proportional to the present number. It has an initial
population of 45000 that increases by 10% in 15 years. What will be the population in 25 years?
*/
#include<stdio.h>
#include<math.h>
int main()
{
    printf("\nRate of growth is directly proportional to the present population number P(t) at time t,\n\n");
    printf("            dp/dt=kp\n\n");
    double p0 = 45000, t, t15=15, t25=25;
    printf("Given that,\n\nInitial population is = %.0lf\n\n", p0);
    double p15 = p0+(p0*15/100);
    printf("Population after 10 years = %.0lf\n\n", p15);
    double k = -(log(p0/p15))/t15;
    double p30 = p0*(exp(k*t25));
    printf("Proportional constant k = %lf\n\n",k);
    printf("The population after 25 years = %.2lf\n\n",p15);
    return 0;
}
