#include <stdio.h>

struct staff
{
    int id,salary;
    char name[50];
}ed[50];
void search();
void update();
int main()
{
    main:
    printf("...Enter 1 to insert info: \n");
    printf("...Enter 2 to search info: \n");
    printf("...Enter 3 to update salary: \n");
    printf("...Enter any other key to exit... \n");
    int n;
    scanf("%d", &n);
    fflush(stdin);
    switch(n)
    {
    case 1:
        {
            goto insert;
        }
    case 2:
        {
            search();
        }
    case 3:
        {
            update();
        }
    default:
        {
            return 0;
        }

    }
    insert:
        for(int i=1;i<=50;i++)
        {
            if(i>1)
            {
                printf("\n\nPress enter for another entry...\n");
    printf("Press any other key without enter for main menu...\n");
    char ch;
    scanf("%c", &ch);
    if(ch=='\n')
    {
        goto insert;
    }
    else
    {
        goto main;
    }
            }
            printf("Enter name: ");
    gets(ed[1].name);
    printf("Enter ID: ");
    scanf("%d",&ed[1].id);
    printf("Enter salary: ");
    scanf("%d",&ed[1].salary);
    fflush(stdin);


        }


}

void search()
{
    search:
    printf("........Search by ID.........\n\n");
    printf("Enter ID: \n");
    int id;
    scanf("%d", &id);
    for(int i=0;i<=50;i++)
    {
        if(ed[i].id==id)
        {
            printf("  Name: %s\n  ID: %d  Salary: %d\n", ed[i].name,ed[i].id,ed[i].salary);
        }
    }
    printf("\n\nPress enter for another search...\n");
    printf("Press any other key without enter to exit...\n");
    fflush(stdin);
    char ch;
    scanf("%c", &ch);
    if(ch=='\n')
    {
        goto search;
    }
    else
    {
    }
}

void update()
{
    update:
    printf(".....Update salary.....\n\n");
    printf("Enter ID: \n");
    int id;
    scanf("%d", &id);
    int j;
    for(j=1;j<=50;j++)
    {
        if(ed[j].id==id)
        {
            printf("  Name: %s\n  ID: %d  Current Salary: %d\n", ed[j].name,ed[j].id,ed[j].salary);
            break;
        }

    }
    printf(" J is %d", j);
    printf("Enter updated salary: \n");
    scanf("%d", &ed[j].salary);
    printf("  Name: %s\n  ID: %d  Current Salary: %d\n", ed[j].name,ed[j].id,ed[j].salary);

    printf("\n\nPress enter for another update...\n");
    printf("Press any other key without enter to exit...\n");
    fflush(stdin);
    char ch;
    scanf("%c", &ch);
    if(ch=='\n')
    {
        goto update;
    }
    else
    {
        return 0;
    }
}