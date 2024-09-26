#include <stdio.h>

int main() {
    
    int i,j,sp[10][10],tr[10][10],r,c;
    printf("Enter the size of the row: ");
    scanf("%d",&r);
    printf("Enter the size of the column: ");
    scanf("%d",&c);
    for(i=0;i<r;i++){
        for(j=0;j<r;j++){
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &sp[i][j]);
              
        }
    }
    int k=1;
    for(i=0;i<r;i++){
        for(j=0;j<r;j++){
            if(sp[i][j]!=0){
            tr[k][0]=i;
            tr[k][1]=j;
            tr[k][2]=sp[i][j];
            k++;
            }
        }
    }
            tr[0][0]=r;
            tr[0][1]=c;
            tr[0][2]=k-1;
    printf("TRIPLET REPRESENTION:\n");
    printf("ROW\tcolumn\tValue\n");
    for(i=0;i<k;i++)
    {
        printf("%d\t%d\t%d\t%d\n",tr[i][0],tr[i][1],tr[i][2]);
    }
            
    return 0;
}
