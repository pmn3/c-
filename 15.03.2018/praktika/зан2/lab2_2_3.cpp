// lab2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "math.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(0,"Rus");
	int x,y;
	cout<<"������� �����:"<<endl;
	cin>>x;
	if (x<0) cout<<"������� ������������� �����";
	else
	if (x==0) cout<<"������ ����";
	else
	if (x>9999) cout<<"������� ����������� �����";
	else {
	y=x%10;
	if (y) {
		cout<<"�������="<<y<<endl;
	}
	x=x/10;
	y=x%10;
	if (y) {
		cout<<"�������="<<y<<endl;
	}
	x=x/10;
	y=x%10;
	if (y) {
		cout<<"�����="<<y<<endl;
	}
	x=x/10;
	if (x) cout<<"������="<<x<<endl;

	}

	system("pause");
	return 0;
}

