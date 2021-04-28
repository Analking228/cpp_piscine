#include "../includes/crappybook.hpp"

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

int		ft_command(string command)
{
	if (ft_strsrc(command, "ADD", 3))
		return (1);
	else if (ft_strsrc(command, "SEARCH", 6))
		return (2);
	else if (ft_strsrc(command, "EXIT", 4))
		return (3);
	return (0);
}

int		ft_addcntct()
{
	const int	ctncts_count = 8;
	string		contacts[ctncts_count][255];
	int			i;

	i = 0;
	std::cout << "Enter contact name: ";
	while (contacts[i][0] == 0)
		i++;
	std::cin >> *(contacts[i]); 
	std::cout << *(contacts[i]);
	return (0);
}

int		ft_srccntct()
{
	return (0);
}

int		main(void)
{
	string	command;
	int		check;

	ft_welcome();
	while (1 < 2)
	{
		std::cout << ">>";
		std::cin >> command;
		check = ft_command(command);
		if (check == 1)
			ft_addcntct();
		else if (check == 2)
			ft_srccntct();
		else if (check == 3)
			return (0);
		else
			std::cout << "Error: bad instruction" << std::endl << std::endl;
	}
	return (0);
}