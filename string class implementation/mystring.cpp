// This file included the impelementation of the memebers of the mystring class.
#include<iostream>
#include<cstring>
#include"Mystring.h"

// default constructor/no-args constructor
Mystring::Mystring()
:str{nullptr}{
	str = new char[1];
	*str = '\0';
}

// parameterized/overloaded constructor
Mystring::Mystring(const &s)
:str{nullptr}{
	if(s==nullptr){
		str = new char[1];
		*str = '\0';
	}
	else{
		str = new char[std::strlen(s)+1];
		std::strcpy(str,s);
	}
}

//copy constructor
Mystring::Mystring(const Mystring &source)
:str{nullptr}{
	str = new char[str::strlen(source.str)+1]; // allocating space and then copying: deepcopy
	std::strcpy(str,source.str); 
}

Mystring::~Mystring(){
	delete [] str;
}

void Mystring::show() const{
	std::cout<<str<<":"<<length()<<std::endl;
}

//length getter
int Mystring::length() const{
	return strlen(str);
}

//string getter
const char* Mystring::get_str() const{
	return str;
}