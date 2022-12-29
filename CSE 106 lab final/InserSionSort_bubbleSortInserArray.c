#include <stdio.h>

int a[100];
int e=-1;
int InsersionSort()
{
    int i, value, hole;

    for (int i = 1; i <= e; i++)
    {
        value = a[i];
        hole = i;
        while (hole > 0 && a[hole - 1] > value)
        {
            a[hole] = a[hole - 1];
            hole--;
        }
        a[hole] = value;
    }
    for (i = 0; i <= e; i++)
    {
        printf("%d ", a[i]);
    }
}

int bubbleSort()
{

    int i, j, tem;
    for (i = 1; i <= e; i++)
    {
        for (j = 0; j <= e - i; j++)
        {

            if (a[j] > a[j + 1])
            {
                tem = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tem;
            }
        }
    }
    for (i = 0; i <= e; i++)
    {
        printf("%d ", a[i]);
    }
}

int InsertPosition(){
    int p;
    e++;
    printf("enter the position: ");
    scanf("%d",&p);
    printf("\nEnter the Element: ");
    scanf("%d",&a[p]);
for(int i=e-1;i>p;i--){
    a[i+1]=a[i];

}
a[p]=p;
    }


int show(){

   if(e!=-1){

printf("Your Array  is:\n");
for(int i=0;i<e;i++){
    printf("%d\n",a[i]);
}
   }else{
    printf("No element found \n");
   }

    }


int main()
{
    int d;
    // printf("Enter the Size of Array: ");
    // scanf("%d", &e);
printf("\nEnter 1 for Insersion Sort\nEnter 2 for Inser in fixed position\nEnter 3 for BubbleSort\nEnter 4 for Show everything\n");

scanf("%d",&d);
switch (d)
{
    case 1:
       InsersionSort();
        break;
    case 2:
      bubbleSort();
        break;
    case 3:
       InsertPosition();
        break;
    case 4:
     show();
        break;

    default:
        break;

}
}