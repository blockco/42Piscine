/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 22:10:20 by rpassafa          #+#    #+#             */
/*   Updated: 2016/07/19 22:10:23 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strsize(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		i++
	}
return (i);
}

char *ft_strstr(char *str, char *to_find)
{
	int index;
	int find;
	int sizestr;
	int sizetofind;
	char *test;
	
	sizestr = strsize(str);
	sizetofind = strsize(to_find);
	index = 0;

	while(str[index] != '\0'])
	{
		if(str[index] == to_find[index])
		{
			while(to_find[index] == str[index])
			{
				test = str[index];
			}
		else
			return null;
		}
		index++;
	}
}