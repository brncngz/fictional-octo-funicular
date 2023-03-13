

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t n)
{
	char	*d;
	char	*s;
	char	*lasts;
	char	*lastd;

	if (!dst && !src)
		return (NULL);
	d = (char *)dst;
	s = (char *)src;
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
	{
		lasts = s + (n - 1);
		lastd = d + (n - 1);
		while (n--)
			*lastd-- = *lasts--;
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

	char *dst3 = src1 + ;

	printf("Current dst is: %s\n", dst1);
	ft_memmove(dst3, src1, 3);
	printf("New dst is: %s\n", dst1);

	for (int i = 0; i < 5; i++)
		printf("current dst[i] is: %d\n", dst2[i]);
	memmove(dst2, src2, 5);
	for (int i = 0; i < 5; i++)
		printf("new dst[i] is: %d\n", dst2[i]);
}
*/
