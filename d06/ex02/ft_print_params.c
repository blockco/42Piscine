/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 19:09:48 by rpassafa          #+#    #+#             */
/*   Updated: 2016/07/20 19:10:36 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		ft_putchar(str[counter]);
		counter++;
	}
}

int		main(int argc, char *arg[])
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(arg[i]);
		ft_putchar('\n');
		i++;
	}
}
