#include<stdio.h>
#include<string.h>
int my_pal(char*p);
void main(int argc,char*argv[])
{
        int res= my_pal(argv[1]);
        if(res )
        {
                printf("string is a palindrome\n");
        }
        else
        {
                printf("not a palindrome\n");
        }
}
int  my_pal(char *str)
{
        char* p1 = str, *p2= str + strlen(str)-1;
        while(p1 < p2)
        {
                if(*p1++ != *p2--)
                return 0;
        }
	return 1;
}
