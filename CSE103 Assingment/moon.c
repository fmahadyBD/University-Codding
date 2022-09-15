#include<stdio.h>
#include<windows.h>

struct squad{
    char squadName[100];
    int points;
    int nwin;
    int nlose;
    int ndraw;
};
struct squad team[13];

int squadPrint(int i){
    printf("%s\t %d\t %d\t %d\t %d\t\n", team[i].squadName, team[i].points, team[i].nwin, team[i].nlose, team[i].ndraw);
    return 0;
}

int squadNew(int i){
    printf("Enter team name = ");
    scanf("%s", team[i].squadName);
    return 0;
}

int updateStat(int i){
    int w = 2, d = 1;
    team[i].points=0;
    printf("Enter number of wins = ");
    scanf("%d", &team[i].nwin);
    printf("Enter number of loses = ");
    scanf("%d", &team[i].nlose);
    printf("Enter number of draws = ");
    scanf("%d", &team[i].ndraw);
    team[i].points = team[i].points + ((w*team[i].nwin)+d*team[i].ndraw);
    return 0;
}

int main(){
    int i, userin, team_num=0;
    main_menu:
    system("cls");
    printf("Enter Corresponding number for operation --\n");
    printf("\n<1> Print  Squad  Info \n");
    printf("\n<2> Enter  Squad  Info \n");
    printf("\n<3> Update Squad  Info \n");
    printf("\n<4> Show   Point  Table\n");
    printf("\n<5> Exit\n");
    printf("\nEnter your input = ");
    scanf("%d", &userin);
    switch(userin){
    case 1:
    
        system("cls");
        section1:
        printf("Enter team number (1-13) = ");
        scanf("%d", &i);
        if(i<1 || i>13){
            printf("\nEnter Valid Number\n");
            goto section1;
        }
        printf("Name\t Points\t Wins\t Loses\t Draws\t\n");
        squadPrint(i-1);
        user_decision1:
        printf("\nEnter '0' to return\n");
        printf("\nEnter your input = ");
        scanf("%d", &userin);
        if (userin==0){
            goto main_menu;
        }
        else{
            printf("Enter valid input\n");
            Sleep(1000);
            goto user_decision1;
        }
    case 2:
        squad_add:
        system("cls");
        section2:
        printf("Enter team number (1-13) = ");
        scanf("%d", &i);
        if(i<1 || i>13){
            printf("\nEnter Valid Number\n");
            goto section2;
        }
        squadNew(i-1);
        team_num++;
        user_decision2:
        printf("\nEnter '0' to return\n");
        printf("\nEnter '1' to add a new squad\n");
        printf("\nEnter your input = ");
        scanf("%d", &userin);
        if (userin==0){
            goto main_menu;
        }
        else if(userin==1){
            goto squad_add;
        }
        else{
            printf("Enter valid input\n");
            Sleep(1000);
            goto user_decision2;
        }
    case 3:
        system("cls");
        section3:
        printf("Enter team number (1-13) = ");
        scanf("%d", &i);
        if(i<1 || i>13){
            printf("\nEnter Valid Number\n");
            goto section3;
        }
        updateStat(i-1);
        user_decision3:
        printf("\nEnter '0' to return\n");
        printf("\nEnter your input = ");
        scanf("%d", &userin);
        if (userin==0){
            goto main_menu;
        }
        else{
            printf("Enter valid input\n");
            Sleep(1000);
            goto user_decision3;
        }
    case 4:
        system("cls");
        printf("Name\t Points\t Wins\t Loses\t Draws\t\n");
        for(i=0; i<team_num; i++){
            squadPrint(i);
        }
        user_decision4:
        printf("\nEnter '0' to return\n");
        printf("\nEnter your input = ");
        scanf("%d", &userin);
        if (userin==0){
            goto main_menu;
        }
        else{
            printf("Enter valid input\n");
            Sleep(1000);
            goto user_decision4;
        }
        return 0;
    case 5:
        system("cls");
        printf("\nThank You\n");
        Sleep(1000);
        return 0;
    default:
            printf("Enter valid input\n");
            Sleep(1000);
            goto main_menu;
    }
}