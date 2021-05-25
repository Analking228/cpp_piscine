#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : Form("Shruberry Creation", 145, 137), _Target(target) {

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : Form(other), _Target(other._Target) {

}

const char*		ShrubberyCreationForm::OpenFileException::what() const throw() {
	return "Error: open file!";
}

const char*		ShrubberyCreationForm::WriteFileException::what() const throw() {
	return "Error: write file!";
}

void            ShrubberyCreationForm::execute(const Bureaucrat& point) {
	if (!isSigned())
		throw Form::IsNotSignedException();
	if (getToExec() < point.getGrade())
		throw Form::GradeTooLowException();
	
	std::string 		file = _Target + "_shrubbery";
	std::ofstream		out(file);

	std::string			tree[28] = {
	"                                                    .\n"
	"                                          .         ;\n"
	"             .              .              ;%     ;;\n"
	"               ,           ,                :;%  %;\n"
	"                :         ;                   :;%;'     .,\n"
	"       ,.        %;     %;            ;        %;'    ,;\n"
	"         ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
	"          %;       %;%;      ,  ;       %;  ;%;   ,%;'\n"
	"           ;%;      %;        ;%;        % ;%;  ,%;'\n"
	"            `%;.     ;%;     %;'         `;%%;.%;'\n"
	"             `:;%.    ;%%. %@;        %; ;@%;%'\n"
	"                `:%;.  :;bd%;          %;@%;'\n"
	"                  `@%:.  :;%.         ;@@%;'\n" 
	"                    `@%.  `;@%.      ;@@%;\n"   
	"                      `@%%. `@%%    ;@@%;\n"
	"                        ;@%. :@%%  %@@%;\n"
	"                          %@bd%%%bd%%:;\n"
	"                            #@%%%%%:;;\n"
	"                            %@@%%%::;\n"
	"                            %@@@%(o);  . '\n"
	"                            %@@@o%;:(.,'\n"
	"                        `.. %@@@o%::;\n"
	"                           `)@@@o%::;\n"
	"                            %@@(o)::;\n"
	"                           .%@@@@%::;\n"
	"                           ;%@@@@%::;.\n"
	"                          ;%@@@@%%:;;;.\n"
	"                      ...;%@@@@@%%:;;;;,..\n"
	};
    if (!out.is_open() || out.bad())
        throw OpenFileException();
    for (int i = 0; i < 28; i++) {
        out << tree[i] << std::endl;
        if (out.bad()) {
            out.close();
            throw WriteFileException();
        }
    }
    out.close();
}

ShrubberyCreationForm&				ShrubberyCreationForm::operator=(const ShrubberyCreationForm&) {
	return *this;
}


ShrubberyCreationForm::~ShrubberyCreationForm() {

}