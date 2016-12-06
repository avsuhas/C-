/* int (*fptr) (int *,int *);
    fptr is a pointer which is pointing to a function, which receives 2 integer pointers 
    and returns integer
  */
  
#include<stdio.h>
int fun(int *,int *);

int man()
{
  int (*fptr)(int* ,int *);
  int sum;
  int a,b;
  printf("enter the numbers\n");
  scanf("%d%d",&a,&b);
  
  fptr = fun;
  sum = fptr(&a,&b);
  printf("sum= %d\n",sum);
}

int fun(int*p,int*q)
{
   int sum;
   sum = *p+*q;
   return sum;
}
