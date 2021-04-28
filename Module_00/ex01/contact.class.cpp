#include "contact.class.hpp"
#include "crappybook.hpp"

typedef std::string string;

int			Contact::fill_fields(void){

	std::cout << "Enter contact's first name: ";
	std::cin >> first_name;
	std::cout << "Enter contact's last name: ";
	std::cin >> last_name;
	std::cout << "Enter contact's nickname: ";
	std::cin >> nickname;
	std::cout << "Enter contact's login: ";
	std::cin >> login;
	std::cout << "Enter contact's postal adress: ";
	std::cin >> postal_address;
	std::cout << "Enter contact's email address: ";
	std::cin >> email_address;
	std::cout << "Enter contact's phone number: ";
	std::cin >> phone_number;
	std::cout << "Enter contact's birthday date: ";
	std::cin >> birthday_date;
	std::cout << "Enter contact's favorite meal: ";
	std::cin >> favorite_meal;
	std::cout << "Enter contact's underwear color: ";
	std::cin >> underwear_color;
	std::cout << "Enter contact's darkest secret: ";
	std::cin >> darkest_secret;
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
	std::cout << "Constructor called" << std::endl;
	return;
}

Contact::~Contact(void){

	//std::cout << "Destructor called" << std::endl;
}

