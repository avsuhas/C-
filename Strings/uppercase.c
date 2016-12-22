#include<stdio.h>

void my_convert(char*);

int main( int argc,char *argv[])

{


	int i = 1;

	my_convert(argv[1]);
	
                  printf("after conversion string = %s\n",argv[1]);

}

void my_convert(char*p)

{

	while(*p != '\0')

	{

		if(*p >= 'A' && *p <= 'Z')

		{

			*p = *p + 32;

		}
		
                                   else if(*p >= 'a' && *p <= 'z')

		{

			*p = *p - 32;

		}

		p++;

	}

} 
	
				