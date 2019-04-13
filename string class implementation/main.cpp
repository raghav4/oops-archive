#include<iostream>
#include"mystring.h"
using namespace std;
int main()
{
	Mystring empty;
	Mystring string_one("string one");
	Mystring string_two(string_one); // copy constructor

	empty.show();
	string_one.show();
	string_two.show();

	return 0;
}