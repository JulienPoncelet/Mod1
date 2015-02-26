#include <main.cpp>

Mod1::Mod1(void) {
	return ;
}
Mod1::Mod1(Mod1 const & src);
virtual Mod1::~Mod1(void);
	
Mod1 const 			& Mod1::operator=(Mod1 const & rhs);

ListPoint const 	& Mod1::getMap(void) const;

void 				Mod1::setMap(ListPoint * map);