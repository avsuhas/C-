#include<stdio.h>

#include<string.h>

#include<stdlib.h>

void my_strncpy(char* , char*, int);

int main(int argc,char* argv[])

{

	int size,i,n;
	n = atoi(argv[3]);

	size = strlen(argv[2]) + 1;

	char* p = malloc(size);

	char* q = p;

	for(i = 0; argv[1][i] != '\0';i++)

	{

		*q++ = argv[1][i];

	}

	*q = '\0';

	my_strncpy(p,argv[2],n);

	printf("copied string is %s\n",p);

}

void my_strncpy(char* s1 ,char* s2,int n)

{

	int i = 0;
	while(*s2 != '\0' && i < n)

	{

		*s1++ = *s2++;

		i++;

	}

	*s1 = '\0';

} 
