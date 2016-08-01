
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str, int counter)
{
	while(counter >= 0)
	{
		ft_putchar(str[counter]);
		counter--;
	}
}
void ft_putnbr(int nb)
{
	char str[10];
	int counter;

	counter = 0;

	if(nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	else
		nb = nb;
	
	while(nb >= 1)
	{
		str[counter] = '0' + (nb % 10);
		nb = nb / 10;
		counter++;
	}
	ft_putstr(str, counter);
}

int main()
{
	ft_putnbr(-2013);
	return 0;
}