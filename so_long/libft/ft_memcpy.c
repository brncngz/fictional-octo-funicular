

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*dstptr;
	char	*srcptr;

	if (!dst && !src)
		return (NULL);
	i = 0;
	dstptr = (char *)dst;
	srcptr = (char *)src;
	while (n--)
	{
		dstptr[i] = srcptr[i];
		i++;
	}
	return (dst);
}

/*
int	main(void)
{
	char src1[] = "Hello";
	char dst1[] = "XXXXX";
	int src2[] = {1, 2, 3, 4, 5};
	int dst2[] = {0, 0, 0, 0, 0};

	printf("Current dst is: %s\n", dst1);
	ft_memcpy(dst1, src1, 3);
	printf("New dst is: %s\n", dst1);

	for (int i = 0; i < 5; i++)
		printf("current dst[i] is: %d\n", dst2[i]);
	ft_memcpy(dst2, src2, 5);
	for (int i = 0; i < 5; i++)
		printf("new dst[i] is: %d\n", dst2[i]);
}
*/
