#ifndef MODULE_H_INCLUDED
#define MODULE_H_INCLUDED

#include <string>
using std::string;

string convert(int arabic)
{
	string roman = "";
	while (arabic>=10)
	{
		roman += "X";
		arabic -= 10;
	}
	while (arabic>=5)
	{
		roman += "V";
		arabic -= 5;
	}
	while (arabic>=4)
	{
		roman += "IV";
		arabic -= 4;
	}
	while (arabic>=1)
	{
		roman += "I";
		arabic -= 1;
	}
	return roman;
}

#endif
