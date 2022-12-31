#include<stdio.h>
#include <stdlib.h>

int In(){

    int a;
    scanf("%i",&a);
    if(a/10000<=9 & a/10000 >=1){
        return a;
    }else{

        printf("WRONG!");
        exit(0);
    }
}

void ch(int x){
    switch (x)
    {
    case 1:
        printf("#");
        break;
        case 2:
        printf("a");
        break;
        case 3:
        printf("t");
        break;
        case 4:
        printf("j");
        break;
        case 5:
        printf("9");
        break;
        case 6:
        printf("e");
        break;
        case 7:
        printf("@");
        break;
        case 8:
        printf("2");
        break;
        case 9:
        printf("f");
        break;
        case 0:
        printf("?");
        break;
    
    default:
        break;
    }



}
int main(){
    int st;
    int a,i;
    

    st=In();
    
    for(i=0;i<5;i++){
    a=st;
    a=st%10;
    ch(a);
    
    //printf("%d\n",a);

    st=st/10;
 

    }


}