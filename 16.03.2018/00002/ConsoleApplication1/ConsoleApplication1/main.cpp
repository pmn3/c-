#include <iostream>

using namespace std;
typedef unsigned short US;

enum day { monday=1, tuesday,wednesday, thutsday, friday, saturday, sanday};

void main(){
	setlocale(0, "");
	cout << "упр 1" << endl;
	cout << endl;
/*	short s1; //signed - со знаком
	unsigned short us2;  //без знака
	US s3;
	s1 = SHRT_MAX + 1;
	us2 = -1; // -1 нельзя записать в us2 , т.к. us2 имеет тип без знака
	cout << "s1 = " << s1 << endl;
	cout << "us2 = " << us2 << endl;
	*/
	day day1;
	day1 = monday;

	int vybor;
	cin >> vybor;
	
	switch (vybor)
	{
		case monday:
			cout << "понедельник" << endl;
			break;
		case tuesday:
			cout << "вторник" << endl;
			break;
		case thutsday:
			cout << "четверг" << endl;
			break;
	default:
		cout << "укажите корректный от 1 до 7" << endl;
		break;
	}
		
	system("pause");
}