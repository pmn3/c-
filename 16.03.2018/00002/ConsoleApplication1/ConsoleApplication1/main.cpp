#include <iostream>

using namespace std;
typedef unsigned short US;

enum day { monday=1, tuesday,wednesday, thutsday, friday, saturday, sanday};

void main(){
	setlocale(0, "");
	cout << "��� 1" << endl;
	cout << endl;
/*	short s1; //signed - �� ������
	unsigned short us2;  //��� �����
	US s3;
	s1 = SHRT_MAX + 1;
	us2 = -1; // -1 ������ �������� � us2 , �.�. us2 ����� ��� ��� �����
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
			cout << "�����������" << endl;
			break;
		case tuesday:
			cout << "�������" << endl;
			break;
		case thutsday:
			cout << "�������" << endl;
			break;
	default:
		cout << "������� ���������� �� 1 �� 7" << endl;
		break;
	}
		
	system("pause");
}