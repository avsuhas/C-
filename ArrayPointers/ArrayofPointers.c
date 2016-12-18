/* Implementation for Array of Pointers


#include<stdio.h>

int main()
{
        unsigned long int i;
        int a[5] = {2,3,1,4,5};
        int *p[5] = { &a[0],&a[1],&a[2],&a[3],&a[4]};

        for(i=0;i<5;i++)
        {
                printf("%d %lu %lu %lu %d\n",a[i],&a[i],p[i],&p[i],*(p[i]));
        }
}
