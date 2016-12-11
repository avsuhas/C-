/* Program to find the bit count of a number i.e if the number contains binary 1 
        it sums up and given the result*/

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


