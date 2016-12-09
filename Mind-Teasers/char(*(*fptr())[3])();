/* char(*(*fptr())[3])();
   fptr is a function which receives nothing and returns a pointer, 
   which is pointing to 1D array of 3 elements 
   which is pointing to a function which receives nothing and 
   returns character.

          Date : 30 June 2016
*/

#includ<stdio.h>

char (*(*fptr())[3])();
char f1();
char f2();
char f3();

int main()
{
   int i,j;
   char (*(*(*fptr())[3])();
   
   ptr = fptr;
   char(*(*p)[3])() = (*ptr)();
   for(i=0;i<1;i++)
   {
      for(j=0;j<3;j++)
      { 
          printf("%c",(*(*p+i)+j))());
       }
    }
}
char (*(*fptr())[3])()
{
    static char(*a[1][3])() = {f1,f2,f3};
      return a;
}

char f1()
{
    return 'A';
}

char f2()
{
    return 'B';
}



   
