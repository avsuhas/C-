/* Program to add sum of two matrices */

#include<stdio.h>

int main()
{
        int i,j;
        int a[3][3],b[3][3],c[3][3];
        printf("Enter the values for matrix 1\n");
        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                {
                        scanf("%d",&a[i][j]);
                }
        }
        printf("Enter the values for matrix 2\n");
        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                {
                        scanf("%d",&b[i][j]);
                }
        }
       int sum=0;
       for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                {
                        c[i][j]=a[i][j]+b[i][j];
                }
        }
        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                {
                       printf("%d\t", c[i][j]);

                }
                printf("\n");
        }
        printf("\n");
}


