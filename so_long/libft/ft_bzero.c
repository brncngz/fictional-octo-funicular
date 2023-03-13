

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*p;

	i = 0;
	p = (char *) s;
	while (n--)
	{
		p[i] = '\0';
		i++;
	}
}
