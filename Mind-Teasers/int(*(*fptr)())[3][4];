/* int(*(*fptr)())[3][4];
    fptr is a pointer to a function that receives nothing and returns a pointer 
    to a 3D array of 3 rows and 4 columns which returns integer
    
        Date : 1 July 2016
*/

#include<stdio.h>

int (*(*fptr)())[3][4];

int main()
{
    int i,j,k;
    int (*(*fptr)())[3][4];
    fptr = fun;
    int (*p)[3][4] = fptr();
    for(i=0;i<1;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<4;k++)
            {
                printf("%d\t",*(*(*(p+i)+j)+k));
             }
            printf("\n");
         }
          printf("\n");
    } 
      printf("\n");
}

int (*fun())[3][4]
{
    static int a[1][3][4] = { 1,2,3,4,2,3,4,5,3,5,2,4 };
        return a;
}
