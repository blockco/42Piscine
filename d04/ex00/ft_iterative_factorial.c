/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 02:32:19 by rpassafa          #+#    #+#             */
/*   Updated: 2016/07/16 02:32:21 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;
	int i;

	result = 1;
	i = 1;
	if (nb > 0)
	{
		while (i <= nb)
		{
			result = result * i;
			i++;
		}
		return (result);
	}
	else
		return (0);
}
