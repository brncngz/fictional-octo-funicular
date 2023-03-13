

#include "../inc/pipex.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (str1[i] && str2[i] && i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	if (i < n)
		return (str1[i] - str2[i]);
	return (0);
}

/*
int main(void)
{
	char str1[] = "Hello there!";
	char str2[] = "Hello Universe!";
	char str3[] = "Foo Bar";
	char str4[] = "Foo Bar Bas";

	printf("TESTING...\n");
	printf("OUR VERS: Comp of '%s'
   	and '%s' : %d\n", str1, str2, ft_strncmp(str1, str2, 4));
	printf("OFF VERS: Comp of '%s'
   	and '%s' : %d\n", str1, str2, strncmp(str1, str2, 4));
	printf("----\n");

	printf("OUR VERS: Comp of '%s'
   	and '%s' : %d\n", str1, str2, ft_strncmp(str1, str2, 7));
	printf("OFF VERS: Comp of '%s'
   	and '%s' : %d\n", str1, str2, strncmp(str1, str2, 7));
	printf("----\n");

	printf("OUR VERS: Comp of '%s'
   	and '%s' : %d\n", str3, str4, ft_strncmp(str3, str4, 4));
	printf("OFF VERS: Comp of '%s'
   	and '%s' : %d\n", str3, str4, strncmp(str3, str4, 4));
	printf("----\n");

	printf("OUR VERS: Comp of '%s'
   	and '%s' : %d\n", str3, str4, ft_strncmp(str3, str4, 12));
	printf("OFF VERS: Comp of '%s'
   	and '%s' : %d\n", str3, str4, strncmp(str3, str4, 12));
	printf("----\n");
}
*/
