#include "../includes/crappybook.hpp"

int	ft_strsrc(string s1, string s2, int n)
{
	int		i;
	int		j;

	i = 0;
	while (s1[i] && n)
	{
		j = 0;
		while ((s1[i + j] == s2[j]) && s1[i + j] && s2[j])
			j++;
		if (!s2[j])
			return (1);
		i++;
		n--;
	}
	return (0);
}