#include <iostream>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <string>
#include <string.h>

/*using string=std::string;*/

typedef std::string string;

std::ifstream* newFile(string fileName) {
	
	std::ifstream *File = new std::ifstream;
	
	File->open(fileName);
	if (File->fail()){
		std::cout << "Error: Cannot open " << fileName << " file" << std::endl;
		delete (File);
		return (NULL);
	}
	return (File);
}

int	changeStr(string fileName, string s1, string s2, std::ifstream *File){
	
	std::ofstream oFile;
	string text;
	std::stringstream buf;

	std::transform(fileName.begin(), fileName.end(), fileName.begin(), ::toupper);
	fileName += ".replace";
	oFile.open(fileName, std::ofstream::trunc);
	if (oFile.fail()){
		std::cout << "Error: Cannot create " << fileName << " file" << std::endl;
		return (1);
	}
	buf << File->rdbuf();
	text = buf.str();
	size_t i = 0;
	while((i = text.find(s1, i)) != string::npos){
		text.replace(i, s1.length(), s2);
		i += s2.length();
	}
	oFile << text << std::endl;
	oFile.close();
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
		std::cout << "Error: Bad input" << std::endl;
		return (1);
	}
	File = newFile(string(av[1]));
	if (*File)
		changeStr(string(av[1]), string(av[2]), string(av[3]), File);
	return (0);
}