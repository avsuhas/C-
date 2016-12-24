#include<stdio.h>

#include<string.h>

#include<stdlib.h>


void my_strrev(char*);

void my_strword(char *, int);


int main(int argc, char *argv[])

{


	int i, sum =0, j;


	for(i=1; i<argc; i++)

	{

		sum = sum + strlen(argv[i]);

	}

	
	sum = sum + argc - 1;


	                 char *p = malloc(sum);

	                 char *q = p;


	                 for(i=1; i<argc; i++)

	                 {

		       for(j=0; argv[i][j] != '\0'; j++)

		{

			*p = argv[i][j];

			p++;

		}

		*p++ = ' ';

	}
	*--p = '\0';



	p = q;


	
printf("\n\n\t input = %s", p);

	my_strrev(p);


	printf("\n\t reverse = %s", p);

	my_strword(p, argc);

}


void my_strrev(char*p)

{

	int i,j;


	for(i=0, j= strlen(p)-1; i<j; i++,j--)

	{

		char t;

		t = *(p+i);

		*(p+i) = *(p+j);

		*(p+j) = t;

	}

}




void my_strword(char *p, int count)

{

	static int i = 0, a =0;
	int j,k;


	if(count == 1)

	{

		printf("\n\t word reverse = %s\n\n\n", p);

	}

	else

	{
	
		while(*(p+i) == ' ')

		{

			if(*(p+i) == '\0')

			{

				break;

			}

			i++;

		}

		i--;


		for(k = a, j = i; k<j ; k++, j--)

		{

			int t;

			t = *(p+k);
	
			*(p+k) = *(p+j);

			*(p+j) = t;
	
	                  
		}

		a = i = i+2;

		count--;

		my_strword(p, count);

	}

}
