#include "module.h"
#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <map>
using std::map;

map<int, string> test_cases = {
	{2, "II"},
	{4, "IV"},
	{5, "V"},
	{7, "VII"},
	{10, "X"},
	{13, "XIII"},
	{15, "XV"},
	{16, "XVI"},
	{22, "XXII"},
	{24, "XXIV"},
	{25, "XXV"},
	{27, "XXVII"},
	{29, "XXIX"},
	{30, "XXX"},
	{31, "XXXI"},
	{38, "XXXVIII"},
	{49, "XLIX"},
	{50, "L"},
	{54, "LIV"},
	{99, "XCIX"},
	{100, "C"},
	{167, "CLXVII"},
	{500, "D"},
	{1000, "M"},
	{6896, "MMMMMMDCCCXCVI"}
};


bool test(int convert_paramater, string desired_output)
{
	return convert(convert_paramater)==desired_output;
}

int main()
{
	for(auto test_case : test_cases)
	{
		if (!test(test_case.first, test_case.second))
		{
			cout << "Error: tried converting " << test_case.first << " to " << test_case.second << ". Actual result: " << convert(test_case.first) << endl;
			return 1;
		}
	}
	cout << "All tests passed." << endl;
	return 0;
}
