#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _Name(name), _Grade(grade){
	if (_Grade > 150)
		throw Bureaucrat::GradeTooLowExсeption();
	if (_Grade < 1)
		throw Bureaucrat::GradeTooLowExсeption();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _Name(other._Name), _Grade(other._Grade) {

}

const std::string&			Bureaucrat::getName() const{
	return _Name;
}

int						Bureaucrat::getGrade() const{
	return _Grade;
}

void					Bureaucrat::upGrade() {
	_Grade--;
	if (_Grade < 1)
		throw Bureaucrat::GradeTooHighExсeption();
}

void					Bureaucrat::downGrade() {
	_Grade++;
	if (_Grade > 150)
		throw Bureaucrat::GradeTooLowExсeption();
}

void					Bureaucrat::signForm(Form& point) {
	point.beSigned(_Grade);
	if (point.isSigned())
		std::cout << _Name << " signs " << point.getName() << std::endl;
	else
		std::cout << _Name << " cannot sign <form>" << point.getName() << std::endl;
}

const char*				Bureaucrat::GradeTooHighExсeption::what() const throw(){
	return "Error: Grade is too high";
}

const char*				Bureaucrat::GradeTooLowExсeption::what() const throw(){
	return "Error: Grade is too low";
}

Bureaucrat&				Bureaucrat::operator=(const Bureaucrat& other) {
	(std::string)_Name = (std::string)other._Name;
	_Grade = other._Grade;
	return *this;
}

std::ostream&			operator<<(std::ostream& out, const Bureaucrat& point) {
	out << point.getName() << ", bureaucrat grade: " << point.getGrade();
	return out;
}

Bureaucrat::~Bureaucrat() {}