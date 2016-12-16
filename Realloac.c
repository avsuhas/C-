/* Expanding Dynamically Allocated Memory */


#include<stdio.h>
#include<stdlib.h>

int main()
{
        int *p=NULL;
        int i,n,extra;

        printf("How many Elements do you wish to enter\n");
        scanf("%d",&n);

         p = (int *)malloc(n * sizeof(int));

        printf("Enter the values\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",(p+i));
        }
        printf("The values entered are\n");

        for(i=0;i<n;i++)
        {
                printf("%d",*(p+i));
        }
        printf("\n");

        printf("How many extra values do you wish to enter?\n");
        scanf("%d",&extra);
        n = n + extra;

        p = realloc(p,extra * sizeof(int));
        for(;extra--;i++)
        {
                scanf("%d",(p+i));
        }

        printf("The values entered are\n");

        for(i=0;i<n;i++)
        {
                printf("%d",*(p+i));
        }
        printf("\n");
}
