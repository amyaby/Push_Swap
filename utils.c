#include "push_swap.h"
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
// char	*ft_strjoin(int argc, char **argv)
// {
// 	char	*str;
// 	int		i;
// 	int		j;
// 	int		k;
// 	int		len;

// 	len = 0;
// 	i = 1;
// 	while (i < argc)
// 		len += ft_strlen(argv[i++]) + 1;
// 	str = malloc(len * sizeof(char));
// 	if (!str)
// 		return (NULL);
// 	i = 1;
// 	k = 0;
// 	while (i < argc)
// 	{
// 		j = 0;
// 		while (argv[i][j])
// 			str[k++] = argv[i][j++];
// 		str[k++] = ' ';
// 		i++;
// 	}
// 	str[k - 1] = '\0';
// 	return (str);
// }
int	delimiter(char c)
{
	return (c == ' ' || c == '\t');
}
int	count_words(char *s)
{
	int	countword;
	int c;
	countword = 0;
	c = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			countword++;
			while (*s && *s != c)
				s++;
		}
	}
	return (countword);
}

char	*ft_substr(char *s, int start, int len)
{
	char	*substr;
	int		i;

	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[len] = '\0';
	return (substr);
}