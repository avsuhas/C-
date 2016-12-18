/* Simulating 2-D Array using 1-D Array */


#include<stdio.h>
#include<stdlib.h>

int main()
{
        int *p = NULL;
        int i,j,Rows,Cols;

        printf("Enter the number of Rows\n");
        scanf("%d",&Rows);

        printf("Enter the number of Columns\n");
        scanf("%d",&Cols);

        p = (int *)malloc(Rows * Cols * sizeof(int));

        printf("Enter the values into the array\n");

        for(i=0;i<Rows;i++)
        {
                for(j=0;j<Cols;j++)
                {
                        scanf("%d",&p[i* Cols +j]);
                }
        }

        for(i=0;i<Rows;i++)
        {
                for(j=0;j<Cols;j++)
                {
                        printf("%d",p[i* Cols +j]);
                }
                printf("\n");
        }
}
