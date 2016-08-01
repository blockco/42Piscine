#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int index;
	index = 0;

	while(src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int main()
{
	char str1[10] = "Hello";
	char str2[10] = "Bye!";
	char str3[10] = "good";
	char str4[10] = "bad";

	printf("%s\n",ft_strcpy(str1, str1));
	printf("%s\n",ft_strcpy(str1, str2));
	printf("%s\n",ft_strcpy(str1, str3));
	printf("%s\n",ft_strcpy(str1, str4));
}