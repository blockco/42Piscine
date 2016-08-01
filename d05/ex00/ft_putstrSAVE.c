/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 18:13:05 by rpassafa          #+#    #+#             */
/*   Updated: 2016/07/18 18:13:13 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int counter = 0;

	while(str[counter] != '\0')
	{
		ft_putchar(str[counter]);
		counter++;
	}
}

int main()
{
	char str[] = "42 is rad";

	ft_putstr(str);
	ft_putchar('\n');
	return 0;
}
