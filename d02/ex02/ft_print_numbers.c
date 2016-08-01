/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 11:42:22 by rpassafa          #+#    #+#             */
/*   Updated: 2016/07/14 11:42:26 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_numbers(void);
void ft_putchar(char c);

void ft_print_numbers()
{
	char	c;
	c	=	'0';
		while(c	<=	'9')
		{
	
		ft_putchar(c);
		c++;
		
		}

	ft_putchar('\n');
}