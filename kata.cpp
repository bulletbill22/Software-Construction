#include "module.h"
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	if (!(convert(1)=="I")) cout << "convert(1)!=\"I\"" << endl;
	if (!(convert(2)=="II")) cout << "convert(2)!=\"II\"" << endl;
	if (!(convert(3)=="III")) cout << "convert(3)!=\"III\"" << endl;
	if (!(convert(5)=="V")) cout << "convert(5)!=\"V\"" << endl;
	return 0;
}
