#include <unistd.h>
#include "display.h"
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void tofile(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		ft_putchar(str[counter]);
		counter++;
	}
}

int		ft_filestat(int argc, char *file)
{
	if (argc < 2)
	{
		ft_putstr("reading from std\n");
		return getfile();
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments\n");
		return (0);
	}
	else
	{
		return getargfile(file);
	}
}

int		getargfile(char *file)
{
	int		ret;
	int		size;
	char	temp[BUFF_SIZE];
	int		fd;
	int		fd2;

	fd2 = open(file, O_RDONLY, 0600);
	fd = open("map.txt", O_CREAT | O_WRONLY | O_APPEND, 0600);
	size = 0;
	while ((ret = read(fd2, temp, BUFF_SIZE)) != 0)
	{
		write(fd, temp, ret);
		size += ret;
	}
	close(fd);
	printf("%d\n",size);
	return size;
}
int		getfile()
{
	int ret;
	int size;
	char temp[BUFF_SIZE];
	int fd;

	fd = open("map.txt", O_CREAT | O_WRONLY | O_APPEND, 0600);
	size = 0;
	while ((ret = read(0, temp, BUFF_SIZE)) != 0)
	{
		write(fd, temp, ret);
		size += ret;
	}
	close(fd);
	printf("%d\n",size);
	return size;
}

char	*readstore(int size)
{
	char	*map;
	char	temp1;
	int		fd;
	int		i;
	int		ret;

	i = 0;
	map = malloc(sizeof(char) * size + 1);//malloc size of map chat**
	fd = open("map.txt", O_RDONLY, 0600);//open map to store
	while ((ret = read(fd, &temp1, 1)) != 0)
	{
		map[i] = temp1;
		i++;
	}
	map[i] = '\0';
	return map;
}