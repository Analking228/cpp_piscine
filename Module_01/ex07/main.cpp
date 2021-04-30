#include <iostream>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <string>

using string=std::string;

std::ifstream* newFile(string fileName) {
	
	std::ifstream *File = new std::ifstream;
	
	File->open(fileName);
	if (File->fail()){
		std::cout << "Error: cannot open " << fileName << " file" << std::endl;
		delete (File);
		return (NULL);
	}
	return (File);
}

int	changeStr(string fileName, string s1, string s2, std::ifstream *File){
	
	std::ofstream *oFile = new std::ofstream;

	std::transform(fileName.begin(), fileName.end(), fileName.begin(),
                   [](unsigned char c) -> unsigned char { return std::toupper(c); });
	fileName += ".replace";
	oFile->open(fileName);
	if (oFile->fail()){
		std::cout << "Error::Unable ot create file: " << fileName << std::endl;
		delete (oFile);
		return (1);
	}

	string text;
	std::stringstream buffer;
	buffer<< File->rdbuf();
	text = buffer.str();
	size_t i = 0;
	while((i = text.find(s1, i)) != string::npos){
		text.replace(i, s1.length(), s2);
		i += s2.length();
	}
	*oFile << text << std::endl;
	oFile->close();
	File->close();
	return (0);
}

int main(int ac, char **av){
	
	std::ifstream *File;

	if (ac != 4) {
		std::cout << "Error: Bad input" << "\n" << "Please enter data as folows:" << "\n" 
		<< "{filename} {string to change} {changing string}" << std::endl;
		return (1);
	}
	if (!av[1]  || !av[2] || !av[3] ){
		std::cout << "Error:Bad input" << std::endl;
		return (1);
	}
	File = newFile(string(av[1]));
	if (*File)
		changeStr(string(av[1]), string(av[2]), string(av[3]), File);
	delete (File);
	return (0);
}