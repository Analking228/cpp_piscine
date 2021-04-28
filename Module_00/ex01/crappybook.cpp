#include "crappybook.hpp"
#include "contact.class.hpp"

// typedef std::string string;

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

int		ft_addcntct(Contact *field, int number)
{
	field->fill_fields(number);
	return (0);
}

int		ft_srccntct(Contact *instance)
{
	int		i;

	i = 0;
	while (i < 8){
		if ((instance + i)->index != -1)
			std::cout << (instance + i)->print_search_fields() << std::endl;
		i++;
	}
	if (i >= 8 && instance->index == -1)
		std::cout << "Nothing to search. Phonebook is empty" << std::endl;
	return (0);
}

int		main(void)
{
	Contact		instance[8];	
	string		command;
	int			check;
	int			i;

	ft_welcome();
	while (1 < 2)
	{
		std::cout << ">>";
		std::cin >> command;
		check = ft_command(command);
		if (check == 1){
			while (i < 8){
				if (instance[i].index == -1){
					ft_addcntct(&instance[i], i);
					break;
				}
				i++;
			}
			if (i == 8)
				std::cout << "You have added more than 8 contacts. Phone book is fullfilled" << std::endl;
		}
		else if (check == 2)
			ft_srccntct(&instance[0]);
		else if (check == 3)
			return (0);
		else
			std::cout << "Error: bad instruction" << std::endl << std::endl;
	}
	return (0);
}