

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
	s[i] = '\0';
}

/*
void test_func(unsigned int i, char *s) // increases every element by its index
{
	*s += i;
}

int	main(void)
{
	char	str1[] = "abc";
	void	(*f)(unsigned int, char *) = &test_func;

	ft_striteri(str1, (f));
	printf("Mapped str1 is: %s", str1);
}
*/
