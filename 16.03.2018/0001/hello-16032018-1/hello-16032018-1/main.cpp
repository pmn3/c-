#include <iostream>

using namespace std;

void main(){
	setlocale(0, "");
	cout << "упр 1" << endl;
	cout << endl;
	short s1; //signed - со знаком
	unsigned short us2;  //без знака
	s1 = SHRT_MAX + 1;
	us2 = -1; // -1 нельзя записать в us2 , т.к. us2 имеет тип без знака
	
	
	cout << "s1 = " << s1 << endl;
	cout << "us2 = " << us2 << endl;
	system("pause");
}