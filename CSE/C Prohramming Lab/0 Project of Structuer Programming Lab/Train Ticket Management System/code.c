#include<stdio.h>



void Tmymensingh();
void Tcumilla();
void Tshylet();
void TRongpur();
void BrahmaputraExpress();
void Agnibina();
void c1();
void c2();
void r1();
void r2();
void s1();
void s2();
void ch1();
void ch2();
void  Tcha();
int sum =0;

int main(){

    int a;

    printf("\n\n\n\n\n\n.......... Welcome to Bangladesh RaillWay Ticket Management System..........\n\n\n\n ");
   
   
    printf("  Train Dhaka to Mymensingh press 1 \n");
    printf("  Train Dhaka to Cumillah press 2 \n");
    printf("  Train Dhaka to Shylet press 3 \n");
    printf("  Train Dhaka to Rangpur press 4 \n");
    printf("  Train Dhaka to Chittagong press 5 \n");


scanf("%d",&a);
switch (a)
{
case 1:
        Tmymensingh();
        break;
case 2:
    Tcumilla();
        break;
case 3:
    Tshylet();
        break;
case 4:
       TRongpur(); 
        break;
        case 5:
    Tcha(); 
        break;
        default:
    break;




    
}

    printf("\n\nTotal %d \n",sum);
    printf("\n Thanks \n");
    printf("public-privet project\n");
    printf("\nPower by Him's Software company\n\n\n\n");

}

void  Tmymensingh()
{



int a;

    printf(" Agnibina Train Dhaka to Mymensingh press 1 \n");
    printf(" Brahmaputra Express Train Dhaka to Mymensingh press 2 \n");


    scanf("%d",&a);

switch (a)
{
case 1:
        Agnibina();
        break;
case 2:
    BrahmaputraExpress();
        break;


default:
    break;
}


    


}


void Agnibina(){

    int i,nb;

    int a[7]={0,50,100,150,200,250,300};

    printf("\t............Welcome to Agnibina Train Ticket counter.............\n");

    printf("Press 1 for Ticket Dhaka to Gagipur Price %d Taka\n",a[1]);
    printf("Press 2 for Ticket Dhaka to Srepur Price %d Taka\n",a[2]);
    printf("Press 3 for Ticket Dhaka to  MosheshKhali %d Taka\n",a[3]);
    printf("Press 4 for Ticket Dhaka to GoforGaw Price %d Taka\n",a[4]);
    printf("Press 5 for Ticket Dhaka to Fatema Nagar Price %d Taka\n",a[5]);
    printf("Press 6 for Ticket Dhaka to Mymensigh Price %d Taka\n",a[6]);

    scanf("%d",&i);

    printf("Number of ticket you want to Buy:\n");

    scanf("%d",&nb);

        sum=a[i]*nb;
  

}

void  BrahmaputraExpress(){

    int i,nb;

    int a[7]={0,50,100,150,200,250,300};

    printf("\t............Welcome to Brahmapuyra Express Train Ticket counter.............\n");

    printf("Press 1 for Ticket Dhaka to Gagipur Price %d Taka\n",a[1]);
    printf("Press 2 for Ticket Dhaka to Srepur Price %d Taka\n",a[2]);
    printf("Press 3 for Ticket Dhaka to  MosheshKhali %d Taka\n",a[3]);
    printf("Press 4 for Ticket Dhaka to GoforGaw Price %d Taka\n",a[4]);
    printf("Press 5 for Ticket Dhaka to Fatema Nagar Price %d Taka\n",a[5]);
    printf("Press 6 for Ticket Dhaka to Mymensigh Price %d Taka\n",a[6]);
    scanf("%d",&i);
    printf("Number of ticket you want to Buy:\n");
    scanf("%d",&nb);

    sum=a[i]*nb;


}




void   Tcumilla()
{
int a;
    
    printf(" Agnibina Train Dhaka to cumilla press 1 \n");
    
    printf(" Brahmaputra Express Train Dhaka to cumilla press 2 \n");


    scanf("%d",&a);

switch (a)
{

case 1:
       c1();
        break;
case 2:
        c2();
        break;


default:
    break;
}


    


}

void c1(){
 int i,nb;
    
    int a[7]={0,50,100};
    
    printf("\t............Welcome to Dhaka Express Train Ticket counter.............\n");

    printf("Press 1 for Ticket Dhaka to Baramchal Price %d Taka\n",a[1]);
    
    printf("Press 2 for Ticket Dhaka to coumilla Price %d Taka\n",a[2]);

    scanf("%d",&i);
    
    printf("Number of ticket you want to Buy:\n");
    
    scanf("%d",&nb);

    sum=a[i]*nb;
}


void c2(){

 int i,nb;
    
    int a[7]={0,50,100};
    
    printf("\t............Welcome to Mahanagar Provati  Train Ticket counter.............\n");

    printf("Press 1 for Ticket Dhaka to Baramchal Price %d Taka\n",a[1]);
    
    printf("Press 2 for Ticket Dhaka to cumilla Price %d Taka\n",a[2]);

    
    scanf("%d",&i);
    
    printf("Number of ticket you want to Buy:\n");
    
    scanf("%d",&nb);

    sum=a[i]*nb;
}


void  Tshylet()
{
int a;
    
    printf(" Agnibina Train Dhaka to shylet press 1 \n");
    
    printf(" Brahmaputra Express Train Dhaka to shylet press 2 \n");


    scanf("%d",&a);

switch (a)
{

case 1:
        s1();
        break;
case 2:
    s2();
        break;


default:
    break;
}
  


}


void s1(){

 int i,nb;
   
    int a[7]={0,50,100};
    
    printf("\t............Welcome to Kalani Express Express Train Ticket counter.............\n");

    printf("Press 1 for Ticket Dhaka to Baramchal Price %d Taka\n",a[1]);

    printf("Press 2 for Ticket Dhaka to Shylet Price %d Taka\n",a[2]);


    scanf("%d",&i);

    printf("Number of ticket you want to Buy:\n");
    
    scanf("%d",&nb);

    sum=a[i]*nb;
}

void s2(){
 int i,nb;
   
    int a[7]={0,50,100};
    
    printf("\t............Welcome to Joyontika Express Train Ticket counter.............\n");

    printf("Press 1 for Ticket Dhaka to Baramchal Price %d Taka\n",a[1]);

    printf("Press 2 for Ticket Dhaka to shylet Price %d Taka\n",a[2]);

    scanf("%d",&i);
    
    printf("Number of ticket you want to Buy:\n");
    
    scanf("%d",&nb);

    sum=a[i]*nb;
}



void   TRongpur()
{
int a;
    
    printf(" Agnibina Train Dhaka to Rongpur press 1 \n");
    
    printf(" Brahmaputra Express Train Dhaka to Rongpur press 2 \n");


scanf("%d",&a);

switch (a)
{
case 1:
       r1();
        break;
case 2:
    r2();
        break;


default:
    break;
}


    


}


void r1(){
 int i,nb;
   
    int a[7]={0,50,100};
    
    printf("\t............Welcome to Rangpur Express Train Ticket counter.............\n");

    printf("Press 1 for Ticket Dhaka to kurigram Price %d Taka\n",a[1]);
    printf("Press 2 for Ticket Dhaka to Rogpur Price %d Taka\n",a[2]);

    scanf("%d",&i);

    printf("Number of ticket you want to Buy:\n");
    
    scanf("%d",&nb);

    sum=a[i]*nb;
} 


void r2(){
 int i,nb;
   
    int a[7]={0,50,100};
   
    printf("\t............Welcome to Curigram Express Train Ticket counter.............\n");

    printf("Press 1 for Ticket Dhaka to kurigram Price %d Taka\n",a[1]);
    printf("Press 2 for Ticket Dhaka to Rongpur Price %d Taka\n",a[2]);

    
    scanf("%d",&i);
    
    printf("Number of ticket you want to Buy:\n");
    
    scanf("%d",&nb);

    sum=a[i]*nb;
}

void  Tcha()


{
int a;
    printf(" Agnibina Train Dhaka to Khulna press 1 \n");
 
    printf(" Brahmaputra Express Train Dhaka to Khulna press 2 \n");


    scanf("%d",&a);

switch (a)
{
case 1:
        ch1();
        break;
case 2:
    ch2();
        break;


default:
    break;
}


    

}



void ch1(){
 
 int i,nb;
    
    int a[7]={0,50,100};
    
    printf("\t............Welcome to Mahanagar Express  Train Ticket counter.............\n");

    printf("Press 1 for Ticket Dhaka to Feni Price %d Taka\n",a[1]);

    printf("Press 2 for Ticket Dhaka to chitagong Price %d Taka\n",a[2]);

    scanf("%d",&i);
    
    printf("Number of ticket you want to Buy:\n");
    
    scanf("%d",&nb);

    sum=a[i]*nb;
}
void ch2(){
    
 int i,nb;

    int a[7]={0,50,100};
    printf("\t............Welcome to Sonar Bangla Express Train Ticket counter.............\n");

    printf("Press 1 for Ticket Dhaka to Feni Price %d Taka\n",a[1]);

    printf("Press 2 for Ticket Dhaka to Chattagong Price %d Taka\n",a[2]);

    scanf("%d",&i);

    printf("Number of ticket you want to Buy:\n");

    scanf("%d",&nb);

    sum=a[i]*nb;
}
