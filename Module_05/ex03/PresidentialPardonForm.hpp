#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form {

private:
	
	PresidentialPardonForm();
	std::string				_Target;

public:
	PresidentialPardonForm(const std::string& target);
	virtual					~PresidentialPardonForm();

	PresidentialPardonForm(const PresidentialPardonForm&);
	PresidentialPardonForm&	operator=(const PresidentialPardonForm&);

	const std::string&		getTraget() const;
	virtual void			execute(const Bureaucrat&);
};

#endif