/* program to swap a nibble in the given number*/

#include<stdio.h>

int main()
{
        char x=8,y;

        y=(x << 4 | x >> 4);
        printf("swapped nibbles = %d", y);
}
