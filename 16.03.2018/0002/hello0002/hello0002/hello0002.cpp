#include <iostream>

using namespace std;

void main(){
	setlocale(0, "");
	cout << "��� 1" << endl;
	cout << endl;
	short s1; //signed - �� ������
	unsigned short us2;  //��� �����
	s1 = SHRT_MAX + 1;
	us2 = -1; // -1 ������ �������� � us2 , �.�. us2 ����� ��� ��� �����


	cout << "s1 = " << s1 << endl;
	cout << "us2 = " << us2 << endl;
	system("pause");
}