/* reversing the string */

#include<stdio.h>
#include<string.h>

void my_strrev(char*);

int main(int argc,char* argv[])
{
       my_strrev(argv[1]);
       printf("%s\n",argv[1]);
}
void my_strrev(char *p1)
{
       char *p2 = p1+ strlen(p1)-1;
       while(p2 > p1)
        {
               char  temp;
            temp = *p1;
               *p1 = *p2; 
               *p2 = temp;
                p1++;
                p2--;
       }
}
