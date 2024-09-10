#include<stdio.h>

int main()
{
    int n, i, j, min_idx, temp,count=0,space=0;
    space = 16*sizeof(int);
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    count+=2;
    int arr[n];
    printf("Enter the elements of the array: ");
    count++;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        count+=2;
        
    }
    count++;
    for(i = 0; i < n-1; i++)
    {
                 min_idx = i;
                      for(j = i+1; j < n; j++)
					   {
						  if(arr[j] < arr[min_idx])
						  {
							 min_idx = j;
							 count++;
				           } count+=2;
				           
                        } count++;
                        
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    } count++;

    printf("Sorted array: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); count+=2;
    } count++;
    printf("\n");
   printf("Time Complexity is : %d \n",count);
   printf("Space complexity is : %d \n",space);
    return 0;
}
