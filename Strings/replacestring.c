#include<stdio.h>

#include<string.h>

#include<stdlib.h>

void my_replace(char*,char*,char);

int main(int argc , char *argv[])

{

	int r,x;

	printf("enter the char to be replaced\n");

                  scanf("%c",&x);

	r = strlen(argv[1] + strlen("SPC"));

	char *s2 = malloc(r * sizeof(char));

	my_replace(argv[1], s2, x);

	printf("%s\n",s2);

}

void my_replace(char* s1,char* s2,char x)

{

	char s3[4] = "SPC";

	int i, j = 0,k;

	for(; *s1 != '\0';s1++)

	{

		if(*s1 == x )

		{

			for(k = 0;s3[k] != '\0';k++)

			{

				s2[j++] = s3[k];

			}

		}

		else

		{

			s2[j++] = *s1;

		}

	}

}
		

