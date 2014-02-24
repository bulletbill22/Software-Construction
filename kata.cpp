#include "module.h"
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	if (!(convert(1)=="I")) cout << "convert(1)==\"I\"" << endl;
	if (!(convert(2)=="II")) cout << "convert(2)==\"II\"" << endl;
	return 0;
}
