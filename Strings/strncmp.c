#include<stdio.h>

int my_strncmp(char *,char *,int);

int main(int argc, char *argv[])

{

	int n = atoi(argv[3]);

	int r = my_strncmp(argv[1] , argv[2], n);

	printf("%d\n",r);


}

int my_strncmp(char *p, char * q, int n)

{

	int i;

                 for(i = 0;i< n;p++,q++,i++)

                 {
             
		if(*p != *q)

		return (*p - *q);

	}

	return 0;

}


