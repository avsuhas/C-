/* Dynamically Allocating  Memory for a 2-D Array */


#include<stdio.h>
#include<stdlib.h>

int main()
{
        int **p = NULL;
        int rows,cols,i,j;

        printf("Enter the rows\n");
        scanf("%d",&rows);

        printf("Enter the cols\n");
        scanf("%d",&cols);

        p= (int **) malloc(rows *sizeof(int *));
        for(i=0;i<rows;i++)
        {
                p[i]=(int*)malloc(cols *sizeof(int));
        }

        for(i=0;i<rows;i++)
        {
                for(j=0;j<cols;j++)
                {
                        scanf("%d",&p[i][j]);
                }
        }
        for(i=0;i<rows;i++)
        {
                for(j=0;j<cols;j++)
                {
                        printf("%d",p[i][j]);
                }
                printf("\n");
        }
 }
    
