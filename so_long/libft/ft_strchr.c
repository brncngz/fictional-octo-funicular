

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	c2;

	c2 = c;
	i = 0;
	while (s[i])
	{
		if (s[i] == c2)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == c2)
		return ((char *)(s + i));
	return (NULL);
}

/*
int main(void)
{
	char s1[] = "Hello there!";
	char s2[] = "Another test";
	char a = 'e';
	char b = 'f';
	char c = 'Q';
	char d = '!';

	printf("TESTING...\n");
	printf("OUR VERS: addr of '%c' in '%s' at: %p\n", a, s1, ft_strchr(s1, a));
	printf("OFF VERS: addr of '%c' in '%s' at: %p\n", a, s1, strchr(s1, a));
	printf("----\n");

	printf("OUR VERS: addr of '%c' in '%s' at: %p\n", a, s2, ft_strchr(s2, a));
	printf("OFF VERS: addr of '%c' in '%s' at: %p\n", a, s2, strchr(s2, a));
	printf("----\n");

	printf("OUR VERS: addr of '%c' in '%s' at: %p\n", b, s1, ft_strchr(s1, a));
	printf("OFF VERS: addr of '%c' in '%s' at: %p\n", b, s1, strchr(s1, a));
	printf("----\n");

	printf("OUR VERS: addr of '%c' in '%s' at: %p\n", c, s1, ft_strchr(s1, a));
	printf("OFF VERS: addr of '%c' in '%s' at: %p\n", c, s1, strchr(s1, a));
	printf("----\n");

	printf("OUR VERS: addr of '%c' in '%s' at: %p\n", d, s1, ft_strchr(s1, a));
	printf("OFF VERS: addr of '%c' in '%s' at: %p\n", d, s1, strchr(s1, a));
	printf("----\n");

	printf("OUR VERS: addr of '%c' in '%s' at: %p\n", d, s2, ft_strchr(s2, a));
	printf("OFF VERS: addr of '%c' in '%s' at: %p\n", d, s2, strchr(s2, a));
	printf("----\n");
}
*/
