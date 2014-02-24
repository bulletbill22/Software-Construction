#ifndef MODULE_H_INCLUDED
#define MODULE_H_INCLUDED

#include <string>
using std::string;

string convert(const int & roman)
{
	if(roman==1) return "I";
	else if (roman==2) return "II";
	else if (roman==3) return "III";
	else return "";
}

#endif
