#include<stdio.h>
int main() 
{
int i,n,element,key,a[100],flag=0;
printf("Enter the size of the array: ");
scanf("%d",&n);
printf("Enter the element on the array:\n");  

for( i=0;i<n;i++)
{  
   scanf("%d",&a[i]); // elements inputing...
 }
printf("Enter the search key :");
scanf("%d",&key);
  // Elements searching...
    for(i=0;i<n;i++)
      {
    
        if(a[i]==key){
            flag = 1; // If flag is true "if" statment will print otherwise "else"statment
            break;
        }
      }
if(flag == 1)
  { 
   printf("The key %d is found at postion %d",key,i+1);
  }
   else {
   printf("The key not found %d ",key);
  }
  
return 0;
}
