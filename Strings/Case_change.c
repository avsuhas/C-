/* program to replace small case to big case  and vice versa */

#include<stdio.h>
int main()
{
        char *s;
        char a[]="SuHAs";
        s=a;

        int i=0;
        while(s[i]!='\0')
        {
                if(s[i] >= 'a' && s[i] <= 'z')
                *s -=32;

                if(s[i] >= 'A' && s[i] <= 'Z')
                *s +=32;
                i++;
         }
          printf("%s",s);
}


