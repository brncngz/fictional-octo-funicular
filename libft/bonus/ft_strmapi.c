

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		i;

	if (!s || !f)
		return (NULL);
	result = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*
char test_func(unsigned int i, char c) // increases every element by its index
{
	return (c + i);
}

int	main(void)
{
	char	str1[] = "abc";
	char	(*f)(unsigned int, char) = &test_func;

	printf("Mapped str1 is: %s", ft_strmapi(str1, (f)));
}
*/
