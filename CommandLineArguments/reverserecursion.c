#include<stdio.h>

#include<string.h>

char* my_strrev(char*s);

int main(int argc,char *argv[])

{

	char*p = my_strrev(argv[1]);

	printf("%s",p);
 
  
}

char* my_strrev(char*s)

{

	return (!*s)? s:strcpy(s,strncat(my_strrev(s +1),s,1));

}
