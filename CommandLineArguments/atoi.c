#include<stdio.h>

int my_atoi(char *);

int main(int argc, char* argv[])

{

        int r = my_atoi(argv[1]);

        printf("%d",r);

}

int  my_atoi(char *p)

{


        int res = 0;

        while(*p != '\0')

        {
        	res = res *10 + (*p - '0');

	p++;

        }

        return res;

}

