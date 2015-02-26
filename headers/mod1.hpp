class Mod1 {

private:

	Map 				* _map;

public:
	Mod1(void);
	Mod1(Mod1 const & src);
	virtual ~Mod1(void);
	
	Mod1 const 			& operator=(Mod1 const & rhs);

	void				setMapFromFile(std::string file);

	Map 			 	* getMap(void) const;

	void 				setMap(Map * map);
	
};
