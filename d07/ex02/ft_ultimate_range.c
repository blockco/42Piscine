/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 14:50:37 by rpassafa          #+#    #+#             */
/*   Updated: 2016/07/21 14:50:38 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max)
{
	int index;
	int hold;
	int *ans;

	hold = max - min;
	index = 0;
	ans = (int*)malloc(sizeof(int) * (max - min));
	if (min >= max)
	{
		return (NULL);
	}
	else
		while (index < hold)
		{
			ans[index] = min;
			min++;
			index++;
		}
	*range = ans;
	return (index);
}
