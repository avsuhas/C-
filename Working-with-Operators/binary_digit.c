/* given a integer as an input program prints in binary */

#include<stdio.h>

int main()
{
        int i,num,mask;
        printf("Enter the number\n");
        scanf("%d",&num);

        mask = 1 << (sizeof(int)*8-1);
        for(i=0; i<(sizeof(int)*8) ;i++)
        {       
                if((num & mask)==0)
                {       
                        printf("0");
                }
                else
                {       
                        printf("1");
                } 
        num = num << 1;
        }
}
