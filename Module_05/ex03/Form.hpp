#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

private:
	const std::string		_Name;
	bool					_isSign;
	int						_toSign;
	int						_toExec;

public:
	Form(const std::string& name, const int toSign, const int toExec);
	~Form();

	Form(const Form&);

	Form&					operator=(const Form& other);

	const std::string&		getName() const;
	int						getToSign() const;
	int						getToExec() const;
	void					upGrade();
	void					downGrade();
	void					beSigned(const Bureaucrat&);
	int						isSigned() const;
	virtual void			execute(const Bureaucrat&) = 0;

	class GradeTooHighException: public std::exception {
		virtual const char*	what() const throw();
	};
	class GradeTooLowException: public std::exception {
		virtual const char*	what() const throw();
	};
	class IsNotSignedException: public std::exception {
		virtual const char* what() const throw();
	};
};

std::ostream&				operator<<(std::ostream& out, const Form& point);

#endif