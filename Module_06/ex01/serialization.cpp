#include <iostream>
#include <string>

std::string randstr("1234567890qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM");

struct Data {

	int n;
	std::string s1;
	std::string s2;
};

void*	serialize(void) {

	char* str = new char[20];

	*reinterpret_cast<int*>(str) = rand();
	for (int i = 4; i < 20; i++){
		str[i] = randstr[rand() % 62];
	}
	return str;
}

Data*	deserialize(void* raw) {

	Data		*data = new Data;
	char*		str = static_cast<char*>(raw);

	data->n = *reinterpret_cast<int*>(str);
	data->s1.assign(str + 4, 8);
	data->s2.assign(str + 12, 8);

	return	data;
}

int		main(void) {
	
	srand(time(0));
	void		*ser = serialize();
	Data		*des = deserialize(ser);

	std::cout << des->s1 << "\n" \
				<< des->n << "\n" \
				<< des->s2 << std::endl;

	delete	des;
	return	0;
}