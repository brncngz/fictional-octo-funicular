

#include "../inc/pipex.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	char	*join_start;

	if (!s1 || !s2)
		return (NULL);
	join = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!join)
		return (NULL);
	join_start = join;
	while (*s1)
	{
		*join = *s1;
		join++;
		s1++;
	}
	while (*s2)
	{
		*join = *s2;
		join++;
		s2++;
	}
	*join = '\0';
	return (join_start);
}

/*
int main(void)
{
	char str1[] = "Hello";
	char str2[] = "Bro";

	printf("Joined string is now: %s\n", ft_strjoin(str1, str2));
}
*/
