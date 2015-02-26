#ifndef MAP_EXCEPTION_HPP
# define MAP_EXCEPTION_HPP

class SyntaxError : public std::exception {
public:
	virtual char const * what(void) const throw() { return "\033[31mSyntax Error!\033[0m"; }
};

class DigitError : public std::exception {
public:
	virtual char const * what(void) const throw() { return "\033[31mSyntax Error: non-digit character detected!\033[0m"; }
};

class CommaError : public std::exception {
public:
	virtual char const * what(void) const throw() { return "\033[31mSyntax Error: need 3 digit to make a valid coord\033[0m"; }
};

#endif
