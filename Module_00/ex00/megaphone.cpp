#include <iostream>
#include <string>

typedef std::string string;

int	main(int argc, char **argv)
{
	string	tmp;
	int		i;
	int		j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		i = 1;
		while (i < argc)
		{
			tmp = string(argv[i]);
			j = 0;
			while (tmp[j])
			{
				if (tmp[j] >= 'a' && tmp[j] <= 'z')
					tmp[j] -= 32;
				j++;
			}
			i++;
			std::cout << tmp;
		}
	}
	std::cout << "\n";
	return (0);
}