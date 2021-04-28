#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include "crappybook.hpp"

class Contact {

public:
	string	print_search_fields(void);
	void	print_fields(void);
	int		fill_fields(int number);
	Contact(void);
	~Contact(void);
	int		index;

private:
	string	first_name;
	string	last_name;
	string	nickname;
	string	login;
	string	postal_address;
	string	email_address;
	string	phone_number;
	string	birthday_date;
	string	favorite_meal;
	string	underwear_color;
	string	darkest_secret;
};

#endif