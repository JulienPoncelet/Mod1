#include <main.hpp>

int 					main(int ac, char ** av) {
	Mod1 				* mod1 = new Mod1;

	ac--;
	av++;
	for (int i = 0; i < ac; i++) {
		try {
			checkfile(av[i]); // test extension / presence
			mod1->setMapFromFile(av[i]);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}
