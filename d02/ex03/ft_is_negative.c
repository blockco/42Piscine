/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 11:42:22 by rpassafa          #+#    #+#             */
/*   Updated: 2016/07/14 11:42:26 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);
void ft_is_negative(int n);
	
	void ft_is_negative(int n)
	{
		char neg = 'n';
		char posnull = 'p';

		if(n<0)
			ft_putchar('p');
		else
			ft_putchar('n');
	}