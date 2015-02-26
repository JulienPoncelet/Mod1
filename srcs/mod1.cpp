#include <main.hpp>

Mod1::Mod1(void) {
	Map 			* newMap = new Map();
	setMap(newMap);
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
			throw SyntaxError();
		if (not buffer[buffer.size()] == ')') // Need to end with ')'
			throw SyntaxError();

		subBuffer = subBuffer.substr(1, subBuffer.size() - 2); // Remove ()

		short int 	commaCount = 0;

		for (unsigned int i = 0; i < subBuffer.size(); i++) {
			if (subBuffer[i] == ',')
				commaCount++;
			else if (not isdigit(subBuffer[i]))
				throw DigitError();
		}

		if (commaCount != 2)
			throw CommaError();

		Point		* newPoint = new Point;

		newPoint->x = atoi(subBuffer.substr(0, subBuffer.find(',')).c_str());
		subBuffer = subBuffer.substr(subBuffer.find(',') + 1);
		newPoint->y = atoi(subBuffer.substr(0, subBuffer.find(',')).c_str());
		subBuffer = subBuffer.substr(subBuffer.find(',') + 1);
		newPoint->z = atoi(subBuffer.c_str());

		getMap()->push_back(newPoint);

		buffer = buffer.substr(buffer.find(' ') + 1);
	}

	return ;
}

void				Mod1::printMap(void) const {
	Map::iterator 	it = getMap()->begin();
	Map::iterator 	ite = getMap()->end();
	int 			i = 0;

	for (; it != ite; it++) {
		std::cout << "Point " << i << ":";
		std::cout << " X = " << (*it)->x;
		std::cout << " Y = " << (*it)->y;
		std::cout << " Z = " << (*it)->z << std::endl;
    	i++;
	}
}
