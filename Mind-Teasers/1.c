/* int (*fptr)();
    fptr is a pointer to a function, receives nothing and returns integer
    
      Date : 30 June 2016
*/

#include<stdio.h>
int fun();

int main()
{
  int (*fptr)();
  fptrt = fun;
  int sum = fptr();
  printf("sum = %d\n",sum);
}

int fun90
{
  int a,b,sum;
  printf("enter the numbers\n");
  scanf("%d%d",&a,&b);
  sum = a+b;
  return sum;
}
