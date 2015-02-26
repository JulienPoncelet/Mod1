#ifndef MAP_HPP
# define MAP_HPP

# include <main.hpp>

class Map {

private:
	ListPoint 			* _map;

public:
	Map(void);
	Map(Map const & src);
	virtual ~Map(void);

	Map const			& operator=(Map const & rhs);

	ListPoint const 	& getMap(void) const;

	void				setMap(const )

};

#endif
