#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form {

private:
	std::string			_Target;

public:
	RobotomyRequestForm(const std::string& target);
	~RobotomyRequestForm();

	RobotomyRequestForm(const RobotomyRequestForm&);
	RobotomyRequestForm&		operator=(const RobotomyRequestForm&);

	const std::string&			getTraget() const;
	virtual void				execute(const Bureaucrat&);
};

#endif