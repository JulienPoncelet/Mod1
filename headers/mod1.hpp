class Mod1 {

private:

	ListPoint 			* _map;

public:
	Mod1(void);
	Mod1(Mod1 const & src);
	virtual ~Mod1(void);
	
	Mod1 const 			& operator=(Mod1 const & rhs);

	ListPoint const 	& getMap(void) const;

	void 				setMap(ListPoint * map);
};