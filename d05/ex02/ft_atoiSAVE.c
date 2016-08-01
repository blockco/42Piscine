#include <stdio.h>

int	countspace(int i, char *str)
{
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '+')
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int index;
	int ans;

	index = 0;
	ans = 0;
	index = countspace(index, str);
	while (str[index] != '\0')
	{
		if (str[index] > 47 && str[index] < 58)
		{
			ans = ans * 10;
			ans += (str[index] - 48);
			index++;
		}
		else
			return (ans);
	}
	return (ans);
}

int main(void)
{
	char str[10];
	int ans;
	int ans1;
	int ans2;
	int ans3;

	ans = 0;
	ans1 = 0;
	ans2 = 0;
	ans3 = 0;

	ans = ft_atoi("   5234");
	ans1 = ft_atoi("a5234");
	ans2 = ft_atoi("5234a");
	ans3 = ft_atoi("52d34");

	printf("%d\n", ans);
	printf("%d\n", ans1);
	printf("%d\n", ans2);
	printf("%d\n", ans3);

	return 0;
}
