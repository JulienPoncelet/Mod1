#include <main.hpp>

Mod1::Mod1(void) {
	return ;
}

Mod1::Mod1(Mod1 const & src) {
	*this = src;
	return ;
}

Mod1::~Mod1(void) {
	return ;
}
	
Mod1 const 			& Mod1::operator=(Mod1 const & rhs) {
	setMap(rhs.getMap());
	return *this;
}

Map 				* Mod1::getMap(void) const {
	return _map;
}

void 				Mod1::setMap(Map * map) {
	_map = map;
	return ;
}

void				Mod1::setMapFromFile(std::string file) {
	std::ifstream 	in(file.c_str());
	std::string		buffer((std::istreambuf_iterator<char>(in)),
                     		std::istreambuf_iterator<char>());
	std::string 	subBuffer;

	while (buffer.find(' ') != std::string::npos) {
		subBuffer = buffer.substr(0, buffer.find(' '));

		if (not buffer[0] == '(') // Need to start by '('
			std::cout << "ERROR" << std::endl;;
		if (not buffer[buffer.size()] == ')') // Need to end with ')'
			std::cout << "ERROR" << std::endl;;

		subBuffer = subBuffer.substr(1, subBuffer.size() - 2); // Remove ()

		short int 	commaCount = 0;

		for (unsigned int i = 0; i < subBuffer.size(); i++) {
			if (subBuffer[i] == ',')
				commaCount++;
			else if (not isdigit(subBuffer[i]))
				std::cout << "ERROR" << std::endl;
		}

		if (commaCount != 2)
			std::cout << "ERROR" << std::endl;

		buffer = buffer.substr(buffer.find(' ') + 1);
		// break;
	}

	return ;
}
