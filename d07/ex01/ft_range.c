/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 12:25:30 by rpassafa          #+#    #+#             */
/*   Updated: 2016/07/21 12:25:32 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int index;
	int *result;
	int hold;

	hold = min;
	index = 0;
	result = malloc(sizeof(int*) * (max - min));
	if (min >= max)
	{
		return (NULL);
	}
	else
		while (index <= (max - hold))
		{
			result[index] = min;
			min++;
			index++;
		}
	return (result);
}

int main()
{
	int *test;
	int i;

	i = 0;
	test = ft_range(5,10);

	while(i < (10 - 5))
	{
		printf("%d\n",test[i]);
		i++;
	}

}