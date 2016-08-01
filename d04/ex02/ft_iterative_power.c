/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 02:48:40 by rpassafa          #+#    #+#             */
/*   Updated: 2016/07/16 02:48:46 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int total;

	total = nb;
	while (power > 1)
	{
		power--;
		total = nb * total;
	}
	return (total);
}
