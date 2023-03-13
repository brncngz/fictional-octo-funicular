

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <fcntl.h>
# include "libft.h"

struct s_i
{
	long long	i;
	long long	j;
	long long	k;
};

char	*get_next_line(int fd);
char	*ft_strnjoin(const char *s1, char *s2, struct s_i i);

#endif
