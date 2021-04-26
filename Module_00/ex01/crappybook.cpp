#include <string>
#include <iostream>

typedef std::string string;

void	ft_welcome(void)
{
	std::cout << "Hi! I'm the Crappy Phone Book" << std::endl;
	std::cout << "Now you can add some of your important contacts" << std::endl;
	std::cout << "But remember! They will never be saved..." << std::endl;
	std::cout << "To manipulate, you can use the commands listed below" << std::endl << std::endl;
	std::cout << "{ADD}    - to ADD a new contact >>" << std::endl;
	std::cout << "{SEARCH} - to SEARCH a contact you need" << std::endl;
	std::cout << "{EXIT}   - to ... ... ... EXIT from the phonebook" << std::endl << std::endl;
	std::cout << "Goodluck and remember!" << std::endl << std::endl;
	std::cout << "-------------I'm really dump-------------" << std::endl << std::endl;
	std::cout << "Please enter the command" << std::endl << std::endl;
}

int		ft_phonebook(string command)
{
	const int	ctcts_count = 8;
	string		contacts[ctcts_count];
	int			i;

	return (0);
}

int		ft_command(string command)
{
	return (0);
}

int		main(void)
{
	string	command;

	ft_welcome();
	while (1 < 2)
	{
		std::cout << ">>";
		std::cin >> command;
		if (ft_command(command))
		{
			if (ft_phonebook(command))
				return (0);
		}
		else
		{
			std::cout << "Error: bad instruction" << std::endl;
			return (1);
		}
	}
	return (0);
}