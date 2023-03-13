

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1) + 1;
	ptr = malloc(len * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*
int	main(void)
{
	char str[] = "Hello there";
	char *ptr;

	ptr = ft_strdup(str);
	printf("TESTING...\n");
	printf("---\n");
	printf("ptr at address: %p\n", ptr);
	printf("---\n");
	for (int i = 0; i < 12; i++)
		printf("ptr[%d] value is now: %c\n", i, ptr[i]);	
}
*/
