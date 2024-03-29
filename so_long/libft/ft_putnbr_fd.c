

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n *= -1;
		}
		if (n > 9)
		{
			ft_putnbr_fd((n / 10), fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else
		{
			ft_putchar_fd(n + '0', fd);
		}
	}
}

/*
int	main(void)
{
	int n = 1234;
	int	fd;

	fd = open("empty.txt", O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
	ft_putnbr_fd(n, fd);
	return (0);
	close(fd);
}
*/
