#include<stdio.h>

char * my_strstr(char *,char *);

int main(int argc, char * argv[])

{

	int i = 0;

	char *str = my_strstr(argv[1], argv[2]);

	printf("%p  %s",str,str);

}

char *my_strstr(char *s1,char *s2)

{

	int i,j,k,flag = 0;

	for(i = 0; *(s1+i)!= '\0';i++)

	{

		if(*(s1+i) == *(s2+0))
	
	                  {

			flag = 1;

			for(j = 0,k = i;*(s2+j)!= '\0';j++,k++)

			{

				if(*(s1+k) != *(s2+j))

				{


					flag = 0;

					break;

				}

			}

		}

		if(flag)

		break;

	}

	if(flag)

		return (s1 +i);

	else

		return NULL;

}

