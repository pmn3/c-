// lab2_1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include "math.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(0,"");
	//float x, y;
	////metka1:
	//cout<<"������� �:";
	//cin>>x;
	//if (x<-3) 
	//	y=-1/x;
	//if (x>=-3 && x<0) {
	//	y=sqrt(-x);
	//}
	//if (x>=0 && x<1) 
	//	y=x*x;
	//if (x>=1)
	//	y=sqrt(x);
	//cout<<"y="<<y<<endl;
	//if (x==0) break;
	//}
	//goto metka1;
	char ch;
	cout<<"������� �����:";
	cin>>ch;
	switch(ch) {
	case 'a': {cout<<"��������� ����� �"; break;}
	case 'b': {cout<<"��������� ����� �"; break;}
	default: {cout<<"��������� �� � � �� �"; break;}
	}
	system("pause");
	return 0;
}

