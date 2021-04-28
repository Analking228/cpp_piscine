#include "contact.class.hpp"
#include "crappybook.hpp"

typedef std::string string;

void		Contact::print_fields(void){

	std::cout << "First name:      " << first_name << std::endl;
	std::cout << "Last name:       " << last_name << std::endl;
	std::cout << "Nickname:        " << nickname << std::endl;
	std::cout << "Login:           " << login << std::endl;
	std::cout << "Postal address:  " << postal_address << std::endl;
	std::cout << "Email address:   " << email_address << std::endl;
	std::cout << "Phone number:    " << phone_number << std::endl;
	std::cout << "Birthday date:   " << birthday_date << std::endl;
	std::cout << "Favorite meal:   " << favorite_meal << std::endl;
	std::cout << "Underwear color: " << underwear_color << std::endl;
	std::cout << "Darkest secret:  " << darkest_secret << std::endl;
	return;
}

int			Contact::fill_fields(int number){

	index = number;
	std::cout << "Enter contact's first name: ";
	getline(std::cin, first_name);
	std::cout << "Enter contact's last name: ";
	getline(std::cin, last_name);
	std::cout << "Enter contact's nickname: ";
	getline(std::cin, nickname);
	std::cout << "Enter contact's login: ";
	getline(std::cin, login);
	std::cout << "Enter contact's postal adress: ";
	getline(std::cin, postal_address);
	std::cout << "Enter contact's email address: ";
	getline(std::cin, email_address);
	std::cout << "Enter contact's phone number: ";
	getline(std::cin, phone_number);
	std::cout << "Enter contact's birthday date: ";
	getline(std::cin, birthday_date);
	std::cout << "Enter contact's favorite meal: ";
	getline(std::cin, favorite_meal);
	std::cout << "Enter contact's underwear color: ";
	getline(std::cin, underwear_color);
	std::cout << "Enter contact's darkest secret: ";
	getline(std::cin, darkest_secret);
	return (1);
}

string		Contact::print_search_fields(void){

	string	tmp;

	tmp = std::to_string(this->index) + "|" + cut_string(this->first_name) + "|" + cut_string(this->last_name) \
	+ "|" + cut_string(this->nickname) + "|";
	return (tmp);
}

Contact::Contact(void){

	this->index = -1;
	return;
}

Contact::~Contact(void){

	return;
}

