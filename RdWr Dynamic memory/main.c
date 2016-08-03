#include "display.h"

int	main(int argc, char **agrv)
{
	int		i;
	int 	count;
	int		size;
	char	*map;

	count = 0;
	i = 0;
	//size = getfile();//find size of malloc //get stdin
	size = ft_filestat(argc, agrv[1]);
	map = malloc(sizeof(char) * size + 1);
	map = readstore(size);
	ft_putstr(map);
	return (0);
}