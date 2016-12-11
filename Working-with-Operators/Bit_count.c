/* program to count the number of bits in an entered number */

#include<stdio.h>

int main()
{
        int x,count=0;
        printf("Enter the number\n");
        scanf("%d",&x);

        while(x!=0)
        {
                if(x & 1)
                {
                        count++;
                }

                x = x >> 1;
        }
        printf("%d",count);
}
