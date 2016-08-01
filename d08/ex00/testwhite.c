
int 	countwords(char *str)
{
	int index;
	int words;

	words = 0;
	index = 0;
	while (str[index])
	{
		if(str[index] <= ' ')
			if(str[index - 1] != ' ')
			{
				words++;
			}
	index++;
	}
	return (words);
}

char	*createwords(char *str, int *i)
{
	char *word;
	int count;
	int index;
	int p;

	p = 0;
	while (str[p] <= ' ')
		p++;
	while(str[p] > ' ')
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
	array = malloc(sizeof(char**) * countwords(str));
	while(k < (countwords(str)))
	{
		array[k] = createwords(str, &i);
		k++;
	}
	array[k] = 0;
	return array;
}
