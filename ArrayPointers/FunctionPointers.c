/* Array of Function Pointers */


#include<stdio.h>


int Func1(int);
int Func2(int);
int Func3(int);

int main()
{
        int (*Fptr[3])(int);
        int Res1, Res2, Res3;

         Fptr[0] = Func1;
         Fptr[1] = Func2;
         Fptr[2] = Func3;

        Res1 = (*Fptr[0])(5);
        Res2 = (*Fptr[1])(6);
        Res3 = (*Fptr[2])(7);

        printf("Res1 = %d",Res1);
        printf("Res2 = %d",Res2);
        printf("Res3 = %d",Res3);

        return 0;
}

int Func1(int x)
{
        return ++x;
}

int Func2(int x)
{
        return ++x;
}

int Func3(int x)
{
        return ++x;
}
