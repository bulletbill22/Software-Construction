#include "module.h"
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	if (!(convert(1)=="I")) cout << "convert(1)=" << convert(1) << endl;
	if (!(convert(2)=="II")) cout << "convert(2)=" << convert(2) << endl;
	if (!(convert(3)=="III")) cout << "convert(3)=" << convert(3)<<endl;
	if (!(convert(5)=="V")) cout << "convert(5)=" << convert(5) << endl;
	return 0;
}
