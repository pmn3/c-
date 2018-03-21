// 01032018_helloworld.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a;
	int b;
	setlocale(0, "");
	cout << "занятие 01032018" << endl;
	cout << "" << endl;

	scanf_s("%d", &a);
	printf("a = %d", a);
	
	cout << "" << endl;
	//system("pause");
	int q;
	scanf_s("%d", &q);
	return 0;
}

