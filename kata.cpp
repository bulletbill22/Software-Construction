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
	if (!(convert(6)=="VI")) cout << "convert(6)=" << convert(6) << endl;
	if (!(convert(7)=="VII")) cout << "convert(7)=" << convert(7) << endl;
	if (!(convert(8)=="VIII")) cout << "convert(8)=" << convert(8) << endl;
	return 0;
}
