#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>
# include <sstream>

class ShrubberyCreationForm : public Form {

private:
	std::string			_Target;

public:
	ShrubberyCreationForm(const std::string& target);
	~ShrubberyCreationForm();

	ShrubberyCreationForm(const ShrubberyCreationForm&);
	ShrubberyCreationForm&		operator=(const ShrubberyCreationForm&);

	const std::string&			getTraget() const;
	virtual void				execute(const Bureaucrat&);

	class OpenFileException: public std::exception {
		virtual const char* what() const throw();
	};
	class WriteFileException: public std::exception {
		virtual const char* what() const throw();
	};
};

#endif