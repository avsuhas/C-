#include<stdio.h>

#include<stdlib.h>

#include<string.h>

void my_strrdup(char*,char*);

void my_strlen(char*);

int main(int argc, char* argv[])

{

	char *p = (char*)malloc(strlen(argv[1])*sizeof(char));

	my_strrdup(p,argv[1]);

	printf("result = %s\n",p);

}

void my_strrdup(char *s2,char *s1)

{

	int i,j,k = 0;

	for(i = 0;s1[i]!= '\0';i++)

	{

		for(j = 0;s1[j]!= '\0';j++)

		{

			if(i!= j)

			{

				if(s1[i] ==s1[j])

				break;

			}

		}

		if(s1[j] == '\0')

		{

			s2[k] = s1[i];

			k++;

		}

	}

}
