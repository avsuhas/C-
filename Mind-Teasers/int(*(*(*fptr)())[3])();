/*  int(*(*(*fptr)())[3])();
    fptr is a pointer to a function that receives nothing and returns a pointer pointing to 
    an array of 3 pointers which is pointing to a function which receives nothing and 
    returns integer.
    
                Date : 1 july 2016
 */
 
#include<stdio.h>
int(*(*(*fptr)())[3]();
int(*(*new())[3])();

int f1();
int f2();
int f3();
{
    int i,j;
    int(*(*(*fptr)())[3])();
    fptr = new;
    int (*(*p)[3])() = fptr();
    for(i=0;i<1;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",(*(*(p+i)+j))());
         }
     }
}

int(*(*new())[3])()
{
    static int (*a[1][3])() = {f1,f2,f3};
    return a;
}

int f1()
{
  return 1;
}

int f2()
{
  return 2;
}

int f3()
{
  return 3;
}
