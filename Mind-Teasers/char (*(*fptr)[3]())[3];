/*  char (*(*fptr)[3]())[3];
      fptr is an array of 3 elements which is a pointer, pointing to a function which receives nothing
      and returns a pointer pointing to array of 3 elements each of type character
      
              Date : 1 july 2016
 */
 
#include<stdio.h>
char (*(*fptr)[3]())[3];

char (*fun1())[3];
char (*fun2())[3];
char (*fun3())[3];

int main()
{
    int i,j;
    char (*(*fptr[3])())[3];
    fptr[0] = fun1;
    fptr[1] = fun2;
    fptr[2] = fun3;
    
    char (*p)[3] = fptr[0]();
    for(i=0;i<1;i++)
    {
        for(j=0;j<3;j++)
         {
            printf("%c\t",(*(*p+i)+j));
          }
      printf("\n");
     }
     
     char (*q)[3] = fptr[1]();
    for(i=0;i<1;i++)
    {
        for(j=0;j<3;j++)
         {
            printf("%c\t",(*(*q+i)+j));
          }
      printf("\n");
     }
     
     char (*r)[3] = fptr[2]();
    for(i=0;i<1;i++)
    {
        for(j=0;j<3;j++)
         {
            printf("%c\t",(*(*r+i)+j));
          }
      printf("\n");
     }
}

char (*fun1())[3]
{
  static char a[1][3] = { 'A','B','C' };
  return a;
}

char (*fun2())[3]
{
  static char b[1][3] = { 'D','E','F' };
  return b;
}

char (*fun3())[3]
{
  static char c[1][3] = { 'G','H','I' };
  return c;
}







     
     
        
    
