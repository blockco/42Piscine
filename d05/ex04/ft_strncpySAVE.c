/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 21:27:51 by rpassafa          #+#    #+#             */
/*   Updated: 2016/07/19 21:27:58 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	//n max num of bites
	int index;

	index = 0;
	while ((src[index] != '\0') && (index <= n))
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int main()
{
	char str1[10] = "Hello";
	char str2[10] = "Bye!";
	char str3[10] = "good";
	char *str4;

	printf("%s\n",ft_strncpy(str1, str1, 3));
	printf("%s\n",ft_strncpy(str1, str2, 2));
	printf("%s\n",ft_strncpy(str1, str3, 4));
	str4 = ft_strncpy(str1, str2, 2));

	return 0;
}