#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int x = 1;
struct aa
{

    int id;
    char name[10];
} ms[100];

void add()
{
    system("cls");
    int a;
    ms[x].id = x;
    printf("\n\n\t\t\t____________________\n");
    printf("\t\t\tData added:\n");
    printf("\t\t\tEnter the %d student name: \n", ms[x].id);
    scanf("%s", ms[x].name);
    x++;
    printf("\n\t\t\tAdded new student data!\n");
    printf("\n\t\t\t____________________\n");
    printf("\n\t\t\tIf you want to add more data type: 1 \n");
    printf("\n\t\t\tFor exit type any keyes without 1:\n");
    scanf("%d", &a);
    if (a == 1)
    {
        add();
    }
}

void up()
{
    system("cls");
    int i, a, t;

    printf("\n\n\t\t\tSearch by id for update:\n\n");
    scanf("%d", &a);
    for (i = 1; i <= x; i++)
    {
        if (a == ms[i].id)
        {
            printf("\n\t\t\tPpress 1 for update id:\n");
            printf("\n\t\t\tPress 2 for update name:\n");
            printf("\n\t\t\tPress 3 for update id and name:\n");
            scanf("%d", &a);

            switch (a)
            {
            case 1:
                printf("\t\t\tUpdate id:\n");
                scanf("%d", &ms[i].id);
                break;
            case 2:
                printf("\t\t\tUpdate name:\n");
                scanf("%s", &ms[i].name);
                break;
            case 3:
                printf("\t\t\tUpdate id:\n");
                scanf("%d", &ms[i].id);
                printf("\t\t\tUpdate name:\n");
                scanf("%s", &ms[i].name);
                break;

            default:
                break;
            }
        }
    }
    printf("\t\t\tUpdated! student data!\n");
    printf("\t\t\t\n____________________\n");
    printf("\t\t\tIf you want to add more data type: 1 \n");
    printf("\t\t\t\nFor exit type any keyes without 1:\n");
    scanf("%d", &t);
    if (t == 1)
    {
        up();
    }

    Sleep(1000);
}

void all()
{

    int i, a, t;

    for (i = 1; i < x; i++)
    {
        system("cls");
        printf("\t\t\tall data sheed:\n");
        printf("\t\t\t\n____________________\n");
        printf("\t\t\tThe id: %d\n", ms[i].id);
        printf("\t\t\tThe name: %s\n", ms[i].name);
    }

    printf("\t\t\t\n____________________\n");

    printf("\t\t\t\nFor exit type any keyes without 0:\n");
    scanf("%d", &t);
    if (0)
    {
        all();
    }

    Sleep(1000);
}

void de()
{
    system("cls");
    int i, t, a, k;
    printf("\t\t\tSearch by id to delete:\n");
    scanf("%d", &a);
    for (i = 0; i <= x; i++)
    {
        if (a == ms[i].id)
        {
            for (k = i; k <= x; k++)
            {
                ms[k].id = ms[k + 1].id;
                
            }
            x--;
        }
    }

    printf("\n\nDeleted data!\n");

    printf("\t\t\t\n____________________\n");
    printf("\t\t\tIf you want to delete more data type: 1 \n");
    printf("\t\t\t\nFor exit type any keyes without 1:\n");
    scanf("%d", &t);
    if (t == 1)
    {
        de();
    }

    Sleep(1000);
}

void si()
{
    system("cls");
    int a, i, t;
    printf("\t\t\t\nEnter the id you want to search:\n");
    scanf("%d", &a);
    for (i = 0; i < x; i++)
    {
        if (a == ms[i].id)
        {
            printf("\n____________________\n");
            printf("\t\t\tThe id: %d\n", ms[i].id);
            printf("\t\t\tThe name: %s\n", ms[i].name);
        }
    }

    printf("\n____________________\n");
    printf("\t\t\tIf you want to Search more data type: 1 \n");
    printf("\t\t\t\nFor exit type any keyes without 1:\n");
    scanf("%d", &t);
    if (t == 1)
    {
        si();
    }
    Sleep(1000);
}

void tx()
{
    system("cls");
    int i;
    char b[100] = "\t\t\tThanks for runing this code.. The coder name: Mahady Hasan Fahim from D4 section";
    for (i = 0; b[i] != '\0'; i++)
    {
        Sleep(70);
        printf("%c", b[i]);
    }
}

int main()
{
    int usin;
    system("cls");

    printf("\t\t\tpress 1 for add new data: \n");
    printf("\t\t\tpress 2 for update data: \n");
    printf("\t\t\tpress 3 for delete data: \n");
    printf("\t\t\tpress 4 for print all data: \n");
    printf("\t\t\tpress 5 for print all data: \n");
    printf("\t\t\tpress any without 1,2,3,3 for exit the programe: \n");
    scanf("%d", &usin);
    switch (usin)
    {
    case 1:
        add();
        system("cls");
        main();
        break;
    case 2:
        up();
        system("cls");
        main();
        break;
    case 3:
        de();
        system("cls");
        main();
        break;
    case 4:
        all();
        system("cls");
        main();
        break;
    case 5:
        si();
        system("cls");
        main();
        break;

    default:
        tx();

        exit(0);

        break;
    }
}