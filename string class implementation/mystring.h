#ifndef _MYSTRING_H
#define _MYSTRING_H

class Mystring
{
	private:
	char *str; // pointer to char to store C-Style string.
	public:
	Mystring(); // Default/no-args constructor
	Mystring(const char*s); // Parameterized overloaded construtor
	Mystring(const Mystring &source); // Copy constructor
	~Mystring(); // Destructor
	void show(); 
	int length(); // returns the length of the string
	const char *get_str() const; // constant 
};

#endif