/* Dynamic Memory Allocation */



#include<stdio.h>
#include<stdlib.h>

int main()
{
        int *p;
        int i,n,sum=0;

        printf("How many Elements do you wish to enter\n");
        scanf("%d",&n);

         p = (int *)malloc(n * sizeof(int));

        printf("Enter the values\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",(p+i));
        }

        for(i=0;i<n;i++)
        {
                sum = sum+ *(p+i);
        }
        printf("sum=%d\n",sum);
}
