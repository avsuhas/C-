/* To find the string Length */

#include<stdio.h>
#include<string.h>

int main()
{
        char s1[6] = "SUHAS";
        int len = my_strlen(s1);
        printf("%d",len);
}

int my_strlen (char s1[])
{
        int i;
        for(i=0;s1[i]!='\0';i++)
                ;
        return i;
}
