#include <string.h>
#include <stdio.h>

int main()
{
	char str1[] = "hello jello kello";
	char str2[] = "ello";
	char *strtest;

	strtest = strstr(str1, str2);

	printf("%s\n",strtest);

	return 0;
}