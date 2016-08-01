/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 16:13:03 by rpassafa          #+#    #+#             */
/*   Updated: 2016/07/14 16:13:09 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_comb(void);	
void ft_putchar(char a);
void print_line(char x, char y, char z);
void replace(int n);

void ft_print_comb()
{
	char	a;
	char	b;
	char	c;
	
	a = '0';
	b = '1';
	c = '2';
	while(a <= '7')
	{
		while(b <= '8')
		{
			while(c <= '9')
			{
				print_line(a,b,c);
				replace(a);
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
}

void print_line(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
}

void replace(int data1)
{
	if(data1 != '7')
		{
		ft_putchar(','); 
		ft_putchar(' ');
		}
}

