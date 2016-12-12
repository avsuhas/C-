/* sum of n numbers */

#include<stdio.h>

int main()
{
        int i,sum=0;
        int n;
        printf("How many numbers to add\n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                sum = sum + i;
        }
        printf("sum of %d number is %d",n,sum);
}

