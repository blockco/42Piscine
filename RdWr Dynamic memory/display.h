#ifndef DISPLAY_H
# define DISPLAY_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/uio.h>
# include <sys/types.h>

# define BUFF_SIZE 8192

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	tofile(char c, int fd);
int		getfile();
int		getargfile(char *file);
char	*readstore(int size);
int		ft_filestat(int argc, char *file);

#endif
