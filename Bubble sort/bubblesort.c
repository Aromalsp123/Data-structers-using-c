#include<stdio.h>
int main ( )
{
    int i,j,n,a[100],temp;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Element are: ");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\n");
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1]) 
            {
                temp = a[j];  
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("sorted array: ");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
    return 0;
}
