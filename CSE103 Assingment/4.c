nt *getarray()  
{  
    int arr[5];  
    printf("Enter the elements in an array : ");  
    for(int i=0;i<5;i++)  
    {  
        scanf("%d", &arr[i]);  
    }  
    return arr;  
}  
int main()  
{  
  int *n;  
  n=getarray();  
  printf("\nElements of array are :");  
  for(int i=0;i<5;i++)  
    {  
        printf("%d", n[i]);  
    }  
    return 0;  
}  