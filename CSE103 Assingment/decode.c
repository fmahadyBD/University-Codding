#include<stdio.h>
int main(){
    int a[10],i;
    char b=115;
    //printf("%c",b);
    char sr[1000]="1KLJ'pz'{ol'{yhklthyr'vm'{ol'Kpnp{hs'Lx|pwtlu{'Jvywvyh{pvu5";
    for(i=0;sr[i]!=0;i++){
        a[i]=sr[i]-7;
        printf("%c",a[i]);
    }

}