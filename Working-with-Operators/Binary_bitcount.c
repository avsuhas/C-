/* Program to find the bit count of a number */

#include<stdio.h>

int main()
{
        int b,num;
        printf("Enter the number\n");
        scanf("%d",&num);

        for(b=0; num!=0; num = num>>1)
        {
                if(num & 1)
                {
                        b++;
                }
        }
        printf("Bit count = %d",b);
}


