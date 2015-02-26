#ifndef MOD1_EXCEPTION_HPP
# define MOD1_EXCEPTION_HPP

class FileNotExist : public std::exception {
public:
	virtual char const * what(void) const throw() { return "\033[31mFile doesn't exist!\033[0m"; }
};

class WrongExtension : public std::exception {
public:
	virtual char const * what(void) const throw() { return "\033[31mWrong Extension, need to be '.mod1'!\033[0m"; }
};

#endif
