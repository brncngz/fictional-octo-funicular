

#include "ft_printf.h"

int	ft_putunbr(size_t i, int ret)
{
	if (i > 9)
	{
		ret += ft_putunbr(i / 10, 0);
	}
	ft_putchar(i % 10 + '0');
	ret++;
	return (ret);
}

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
