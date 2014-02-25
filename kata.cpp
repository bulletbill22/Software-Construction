#include "module.h"
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	if(!(convert(2)=="II"))      cout<<"convert(2)=" <<convert(2) <<endl;
	if(!(convert(5)=="V"))       cout<<"convert(3)=" <<convert(3) <<endl;
	if(!(convert(7)=="VII"))     cout<<"convert(7)=" <<convert(7) <<endl;
	if(!(convert(10)=="X"))      cout<<"convert(10)="<<convert(10)<<endl;
	if(!(convert(13)=="XIII"))   cout<<"convert(13)="<<convert(13)<<endl;
	if(!(convert(15)=="XV"))     cout<<"convert(15)="<<convert(15)<<endl;
	if(!(convert(16)=="XVI"))    cout<<"convert(16)="<<convert(16)<<endl;
	if(!(convert(22)=="XXII"))   cout<<"convert(22)="<<convert(22)<<endl;
	if(!(convert(25)=="XXV"))    cout<<"convert(25)="<<convert(25)<<endl;
	if(!(convert(27)=="XXVII"))  cout<<"convert(27)="<<convert(27)<<endl;
	if(!(convert(30)=="XXX"))    cout<<"convert(30)="<<convert(30)<<endl;
	if(!(convert(31)=="XXXI"))   cout<<"convert(31)="<<convert(31)<<endl;
	if(!(convert(38)=="XXXVIII"))cout<<"convert(38)="<<convert(38)<<endl;
	return 0;
}
