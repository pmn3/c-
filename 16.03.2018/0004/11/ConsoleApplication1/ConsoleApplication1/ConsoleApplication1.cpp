// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int i = 0;
	cout << "i = " << i << endl;
	cout << "i++ = " << i++ << endl; //������� (������� ���������� ������������) ������ �� ����� ����� ��������� �� 1
	cout << "++i = " << ++i << endl;//������� (������� ���������� ���������) ��������� �� 1  ����� ������ �� ����� �����
	cout << "i+i = " << i + i << endl;
	cout << "i-- = " << i-- << endl;
	cout << "--i = " << --i << endl;
	cout << "i = " << i << endl;

	//�������
	double d1 = 14 / 3;
	double d2 = 14.0 / 3;
	double d3 = 14 / 3.0;
	double d4 = 14.0 / 3.0;

	cout << "d1 = " << d1 << endl;
	cout << "d2 = " << d2 << endl;
	cout << "d3 = " << d3 << endl;
	cout << "d4 = " << d4 << endl;


	system("pause");
	return 0;

}
