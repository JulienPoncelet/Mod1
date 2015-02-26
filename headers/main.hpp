#ifndef MAIN_HPP
# define MAIN_HPP

class 						Map;

# include <iostream>
# include <sys/stat.h>

struct Point {
	int 					x;
	int 					y;
	int 					z;
};

typedef std::string 		String;
typedef std::list<Point> 	ListPoint;

# include <mod1.hpp>
# include <mod1_exceptions.hpp>
# include <map.hpp>

/* checkfile.cpp */

void						checkfile(String filepath);

#endif
