#ifndef MAIN_HPP
# define MAIN_HPP

class 						Mod1;

# include <iostream>
# include <sys/stat.h>
# include <list>
# include <fstream>
# include <stdlib.h>

struct Point {
	int 					x;
	int 					y;
	int 					z;
};

typedef std::string 		String;
typedef std::list<Point *> 	Map;

# include <mod1.hpp>
# include <mod1_exceptions.hpp>
# include <map_exceptions.hpp>

/* checkfile.cpp */

void						checkfile(String filepath);

#endif
