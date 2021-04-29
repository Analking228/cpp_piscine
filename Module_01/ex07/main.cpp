#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

std::string changeFileName(std::string fileName){
	std::string fileNameUpper = fileName;

	for(int i = 0; fileName[i] != 0; i++){
		fileNameUpper[i] = toupper(fileName[i]);
	}
	fileNameUpper += ".replace";
	return (fileNameUpper);
}

void createFile(std::string fileName, std::string s1, std::string s2){
	std::ifstream iFile;
	iFile.open(fileName);
	if (iFile.fail()){
		std::cout << "Error::Unable to open file: " << fileName << std::endl;
		exit(1);
	}

	std::string fileNameUpper = changeFileName(fileName);

	std::ofstream oFile;
	oFile.open(fileNameUpper, std::ios::trunc);
	if (oFile.fail()){
		std::cout << "Error::Unable ot create file: " << fileNameUpper << std::endl;
		exit(1);
	}

	std::string text;
	std::stringstream buffer;
	buffer<< iFile.rdbuf();
	text = buffer.str();
	size_t i = 0;
	while((i = text.find(s1, i)) != std::string::npos){
		text.replace(i, s1.length(), s2);
		i += s2.length();
	}
	oFile << text << std::endl;
	oFile.close();
	iFile.close();
}

int main(int ac, char **av){
	if (ac != 4) {
		std::cout << "usage: ./replace [file] [what_replace] [with_what_replace]" << std::endl;
		exit(1);
	}
	if (!av[1]  || !av[2] || !av[3] || !*av[1] || !*av[2] || !*av[3]){
		std::cout << "Error::Bad input info" << std::endl;
		exit(1);
	}
	createFile(std::string(av[1]), std::string(av[2]), std::string(av[3]));
	return (0);
}