#include <main.hpp>

void				checkfile(String filepath) {
	struct stat 	buffer;

	if (stat(filepath.c_str(), &buffer) != 0)
		throw FileNotExist();

	if (filepath.substr(filepath.find_last_of(".") + 1) != "mod1")
		throw WrongExtension();

	std::cout << "\033[032mFile " << filepath << " successfully checked" << std::endl;
	return ;
}
