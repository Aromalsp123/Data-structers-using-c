#include<stdio.h>
struct polynomial{
int coefficient;
int exponent;
};
int main() {
  struct p1[10],p2[10],p3[10];
  int n1,n2,i,j,k;
  printf("Enter the number of terms in polynomial p1:");
  scanf("%d",&n1);
  printf("Enter the number of terms in polynomial p2:");
  scanf("%d",&n2);
  printf("Enter the number of terms in polynomial p1( cofficient and exponent ):\n");
  for(i=0;i<n1;i++)
  {
  printf("Term %d:",i+1);
  scanf("%d%d",&p1[i].coefficient,&p1[i].exponent);
  
  }
  printf("Enter the number of terms in polynomial p2( cofficient and exponent ):\n");
  for(i=0;i<n2;i++)
  {
  printf("Term %d:",i+1);
  scanf("%d%d",&p2[i].coefficient,&p2[i].exponent);
  
  }
  i=0;
  j=0;
  k=0;
  while(i<n1&&j<n2)
  {
    if(p1[i].exponent>p2[j].exponent)
    {
    p3[k].coefficient =p1[i].coefficient;
    p3[k].exponent =p1[i].exponent;
    i++;
    k++;
    
  }
  else if (p1[i].exponent<p2[j].exponent)
   {
  
    p3[k].coefficient =p2[j].coefficient;
    p3[k].exponent =p2[j].exponent;
    i++;
    k++;
    
   }

else {
 p3[k].coefficient=p1[i].coefficient+p2[j].coefficient;
 p3[k].exponent = p1[i].exponent;
 i++;
 j++;
 k++;
 }

 }
 while(i<n1)
 {
 p3[k].coefficient =p1[i].coefficient;
 p3[k].exponent = p1[i].exponent;
 i++;
 k++;
 
}
while(j<n2)
{
 p3[k] =p2[j];
 i++;
 k++;
 
}
n3=k;
printf("Resultent polynomial(p3):");
for(k+0;k<n3;k++)
{
 printf("%dx^%d",p3[K].coefficient,p3[k].exponent);
 if(i!=k-1)
 {
 printf("+");
}

}
printf("\n");


return 0;  
}

