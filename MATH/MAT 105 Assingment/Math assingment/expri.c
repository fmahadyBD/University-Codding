/*A bacteria culture is known to grow at a rate proportional to the amount present. After one
hour, 1500 strands of the bacteria are observed in the culture; and after three hour, 3800
strands. Find the approximate number of strands of the bacteria originally in the culture.
*/

#include<stdio.h>
#include<math.h>
int main(){
    double n1=1500,n2=3800,t1=1,t2=4,t0=0;
    double k,c,n0;

    
    k=(1/(t2-t1))*log(n2/n1);
   
    c=n1*(exp(-k));
    
    n0=c*(exp(k*t0));
    printf("\nFind the approximate number of strands of the bacteria originally in the culture:%lf\n\n\n",n0);


}