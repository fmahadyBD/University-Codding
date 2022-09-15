#include<stdio.h>
#include<windows.h>
#include<string.h>
int i=1;

struct squad{
    char squadName[100];
    int points;
    int nwin;
    int nlose;
    int ndraw;
};
struct squad team[13];

void squadNew(){
    int n;
   
printf("_________________________________________________________________\n");
    printf("Enter team name = ");
    scanf("%s", team[i].squadName);
    team[i].points=0;
    team[i].ndraw=0;
    team[i].nlose=0;
    team[i].nwin=0;

    i++;
    
}


void updateStat(){
int w = 2, d = 1,c=0;
    int j;
    char n[100];
printf("_________________________________________________________________\n");
printf("\t Enter the name of the team for update:\n");
    scanf("%s",n);
    for(j=1;j<=i;j++){
if(!strcmp(team[j].squadName,n)){
      
    team[j].points=0;
    printf("Enter number of wins = ");
    scanf("%d", &team[j].nwin);
    printf("Enter number of loses = ");
    scanf("%d", &team[j].nlose);
    printf("Enter number of draws = ");
    scanf("%d", &team[j].ndraw);
    team[j].points = team[j].points + ((w*team[j].nwin)+d*team[j].ndraw);
c++;

}

    
    
}if(c==0){

printf("Wrong input, please try again:");
}

    }

    
    


void sinfo(){
int j;
for(j=1;j<=i;j++){
printf("_________________________________________________________________\n");
printf("\t\tThe name of Team: %s\n",team[j].squadName);
printf("\t\tThe Wins: %d\n",team[j].nwin);
printf("\t\tThe lose: %d\n",team[j].nlose);
printf("\t\tThe draw: %d\n",team[j].ndraw);
printf("\t\tThe point: %d\n",team[j].points);


}


}

void showPoint(){
    int j;
printf("_________________________________________________________________\n");
printf("\tThe point table:");
printf("_________________________________________________________________\n");

for(j=1;j<=i;j++){
printf("\tpoint of\t  %d Team is\t :%d\n",j,team[j].points);

}


}
void tx(){
     int i;
    char n[100]="\n\t\t\tThank you using for this software...\n\n\t\t\tMahady Hasan Fahim\n\n\n\n";
    
    
    for(i=0;n[i]!=0;i++){
     Sleep(70);
    printf("%c",n[i]);
    
    }
    
    
}


   
   



int main(){
    int  userin;
    
   printf("_________________________________________________________________\n");
    printf("\tEnter Corresponding number for operation --\n");
    printf("\n\t(1) Print  Squad  Info \n");
    printf("\n\t(2) Enter  Squad  Info \n");
    printf("\n\t(3) Update Squad  Info \n");
    printf("\n\t(4) Show   Point  Table\n");
    printf("\n\t(5) Exit\n");
    printf("\n\tEnter your input = ");
    scanf("%d", &userin);
    switch(userin){

        case 1:
        sinfo();
                Sleep(1000);
        main();
        break;
        case 2:
        squadNew();
                Sleep(1000);
        main();
        break;
        case 3:
        updateStat();
                Sleep(1000);
        main();
        case 4:
        showPoint();
                Sleep(1000);
        main();
        break;
        case 5:
        tx();
        exit(0);
        break;
        default:

        break;


    }

    }

