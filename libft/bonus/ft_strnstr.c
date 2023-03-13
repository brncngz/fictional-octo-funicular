

#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0' || needle == NULL)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*
int main(void)
{
	char needle[] = "Caz";
	char haystack[] = "Foo Bar Caz";

	printf("The first occurence of '%s' in
   	'%s' is at %c\n", needle, haystack, *ft_strnstr(haystack, needle, 11));
}
*/
