#include<stdio.h>

int my_strlen(char * );

int my_poli(char *, char *);

int main(int argc, char* argv[])

	int i = 0, j, flag = 0;
	
	j = my_strlen(argv[1]);
	
	char* p = argv[1] + my_strlen(argv[1]);
		
	flag = my_poli(argv[1], p);
		
	if(flag == 0)
		printf("Given String %s is the polindrome\n", argv[1]);
	else
		printf("Given String %s is the NOT polindrome\n", argv[1]);	
	
	return 0;

}


int my_strlen(char *p)
{
	int j = 0;
	
	while(*p++ != '\0') j++;
	
	return --j;
}

int my_poli(char *p, char *q)
{
	if(*p != *q)
		return 1;
	else
	{
		if(p < q)
		{
			return my_poli(++p, --q);
		}
		else
		{
			return 0;
		}
	}
}			
		

