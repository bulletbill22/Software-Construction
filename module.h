#ifndef MODULE_H_INCLUDED
#define MODULE_H_INCLUDED

#include <string>
using std::string;
#include <map>
using std::map;

map<int, string, std::greater<int>> conversion_table = {
	{1000, "M"},
	{900, "CM"},
	{500, "D"},
	{400, "CD"},
	{100, "C"},
	{90, "XC"},
	{50, "L"},
	{40, "XL"},
	{10, "X"},
	{9, "IX"},
	{5, "V"},
	{4, "IV"},
	{1, "I"}
};

string convert(int arabic)
{
	string roman = "";
	for(auto pair : conversion_table)
	{
		while(arabic>=pair.first)
		{
			roman+=pair.second;
			arabic-=pair.first;
		}
	}
	return roman;
}

#endif
