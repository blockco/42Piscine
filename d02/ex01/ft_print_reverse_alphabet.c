/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 11:42:22 by rpassafa          #+#    #+#             */
/*   Updated: 2016/07/14 11:42:26 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);
void ft_print_reverse_alphabet(void);

void ft_print_alphabet()
{
		char c;
   		c	= 'z';
		
		while(c >= 'a' )
		{
	
			ft_putchar(c);
			c--;
		}
		ft_putchar('\n');
}