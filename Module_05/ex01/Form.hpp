#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

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
	const int				getToSign() const;
	void					upGrade();
	void					downGrade();
	void					beSigned(const int grade);
	const int				isSigned() const;

	class GradeTooHighException: public std::exception {
		virtual const char*	what() const throw();
	};
	class GradeTooLowException: public std::exception {
		virtual const char*	what() const throw();
	};

};

std::ostream&				operator<<(std::ostream& out, const Form& point);

#endif