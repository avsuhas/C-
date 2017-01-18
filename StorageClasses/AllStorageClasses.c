/* Auto storage class */

#include<stdio.h>

int main()
{
        auto int a = 5;
        fun(a);
        fun(a);
        fun(a);
        printf("%d",a);
}

void fun(int a)
{
        a++;
        printf("%d",a);
}

/* Register storage class */

#include<stdio.h>

int main()
{
        register int a = 5;
        fun(a);
        fun(a);
        fun(a);
        printf("%d",a);
}

/* Static storage class */

int main()
{
        fun();
         fun();
          fun();
}
void fun()
{
    static int a = 7;
    a++;
    printf("%d",a);
}

/* global storage class */

int a = 6;
int main()
{
        a++;
         printf("%d",a);
         fun();a++;
          printf("%d",a);
}
void fun()
{
    a++;
     printf("%d",a);
     a++;
 }





