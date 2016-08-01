/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 14:32:29 by rpassafa          #+#    #+#             */
/*   Updated: 2016/07/19 14:32:32 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	countspace(int i, char *str)
{
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '+')
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int index;
	int ans;

	index = 0;
	ans = 0;
	index = countspace(index, str);
	while (str[index] != '\0')
	{
		if (str[index] > 47 && str[index] < 58)
		{
			ans = ans * 10;
			ans += (str[index] - 48);
			index++;
		}
		else
			return (ans);
	}
	return (ans);
}
