#include<stdio.h>


void  my_strcat(char *,char *);

int main(int argc, char*argv[])

{


        my_strcat(argv[1] , argv[2]);

        printf("%s",argv[1]);

}

void my_strcat(char *p,char *q)

{


        while(*p != '\0')

        p++;

        while(*p++ = *q++ )

	;


}


