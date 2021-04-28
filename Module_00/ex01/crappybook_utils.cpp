#include "crappybook.hpp"

typedef std::string string;

string	cut_string(const string str){

	string	tmp;
	int		i;

	i = str.length();
	tmp = str;
	if (i > 10){
		tmp = str.substr(0, 9);
		tmp = tmp + ".";
	}
	else if (i < 10)
		while (i++ <= 10)
			tmp += " ";
	return (tmp);
}

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