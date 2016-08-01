/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 22:02:15 by rpassafa          #+#    #+#             */
/*   Updated: 2016/07/23 22:02:21 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>


int		countwords(char *str)
{
	int index;
	int words;

	words = 0;
	index = 0;
	while (str[index])
	{
		if (str[index] <= ' ')
			if (str[index - 1] != ' ')
			{
				words++;
			}
		index++;
	}
	return (words);
}

char	*createwords(char *str, int *i)
{
	char	*word;
	int		count;
	int		index;
	int		p;

	p = 0;
	while (str[p] <= ' ')
		p++;
	while (str[p] > ' ')
		p++;
	word = malloc(sizeof(char) * p + 1);
	count = 0;
	index = *i;
	while (str[index] <= ' ')
		index++;
	while (str[index] > ' ')
	{
		word[count] = str[index];
		index++;
		count++;
	}
	word[count] = 0;
	*i = index;
	return (word);
}

char	**ft_split_whitespaces(char *str)
{
	char	**array;
	int		k;
	int		i;

	i = 0;
	k = 0;
	array = malloc(sizeof(char**) * countwords(str) + 1);
	while (k < (countwords(str)))
	{
		array[k] = createwords(str, &i);
		k++;
	}
	array[k] = 0;
	return (array);
}

int main(void)
{
	int n = 0;
	int i = 0;
	char a[] = "  adf   a  sfdasf   sf \n dfadf \t y";
	char **b = ft_split_whitespaces(a);
	while (b[n] != 0)
	{
		i = 0;
		while (b[n][i] != '\0')
		{
			printf("%c", b[n][i]);
			i++;
		}
		n++;
	}
	free(b);
	return (0);
}