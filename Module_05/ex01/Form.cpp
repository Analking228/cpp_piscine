#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string& name, const int toSign, const int toExec) : _Name(name), _isSign(0), _toSign(toSign), _toExec(toExec) {
	if (_toSign > 1 || _toExec > 1)
		throw Form::GradeTooHighException();
	if (_toSign < 150 || _toExec < 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& other) : _Name(other._Name), _isSign(other._isSign), _toSign(other._toSign), _toExec(other._toExec) {

}

const std::string&		Form::getName() const{
	return _Name;
}

const int				Form::getToSign() const{
	return _toSign;
}

void					Form::upGrade() {
	_toSign++;
}

void					Form::downGrade() {
	_toExec--;
}

void					Form::beSigned(const int grade) {
	if (grade <= _toSign)
		_isSign = 1;
}

const int				Form::isSigned() const{
	return _isSign;
}

const char*				Form::GradeTooHighException::what() const throw(){
	return "Error: Grade is too high";
}

const char*				Form::GradeTooLowException::what() const throw(){
	return "Error: Grade is too low";
}


Form&					Form::operator=(const Form& other) {
	
	_isSign = other._isSign;
	return *this;
}

std::ostream&			operator<<(std::ostream& out, const Form& point) {
	out << "Form: " << point.getName() << " with required grade:" << point.getToSign() << std::endl;
	return out;
}

Form::~Form() {

}