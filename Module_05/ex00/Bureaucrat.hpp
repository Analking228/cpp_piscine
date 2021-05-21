#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Bureaucrat {
private:
	Bureaucrat();
	const std::string		_Name;
	int						_Grade;

public:
	~Bureaucrat();

	Bureaucrat(const std::string& name, int grade);
	Bureaucrat(const Bureaucrat& other);

	Bureaucrat&				operator=(const Bureaucrat& other);

	const std::string&			getName() const;
	int						getGrade() const;
	void					upGrade();
	void					downGrade();
	
	class GradeTooHighExсeption: public std::exception {
		virtual const char*	what() const throw();
	};
	class GradeTooLowExсeption: public std::exception {
		virtual const char*	what() const throw();
	};
};

std::ostream&				operator<<(std::ostream &out, Bureaucrat const& bureaucrat);

#endif