/*A bacteria culture is known to grow at a rate proportional to the amount present. After one
hour, 1500 strands of the bacteria are observed in the culture; and after three hour, 3800
strands. Find the approximate number of strands of the bacteria originally in the culture.
*/

#include<stdio.h>
#include<math.h>
int main(){
    double n1=1500,n2=3800,t1=1,t2=4,t0=0;
    double k,c,n0,ex;

    printf("\nFinding the approximate number of strands of the bacteria originally in the culture.Find the  approximate number of strands of the bacteria originally in the culture.\n\n");
    printf("\n Let N(t) denote the number of bacteria strands in the culture at time t. From (6.1), d N / d t-k N=0dN/dt−kN=0, which is both linear and separable. Its solution is:\n");
    printf("\n               N(t)=ce^kt\n");
    printf("\n               At t = 1, N= 1500; hence,\n");
    printf("\n              1500=ce^k)\n");
    printf("\n               At t = 4, N= 3800; hence,\n");
    ex=t2-t1;
    ex=1/ex;
    printf("                3800=ce^k");
    k=(ex)*log(n1/n2);
    printf("\nThe value of k=%lf\n\n",k);
    c=n1*(exp(-.464));
    printf("\nThe value of c=%f\n",c);
    n0=c*(exp(k*t0));
    printf("\nFind the approximate number of strands of the bacteria originally in the culture:%lf\n\n\n",n0);


}