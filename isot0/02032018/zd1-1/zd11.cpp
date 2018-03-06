#include <iostream>
#define _USE_MATH_DEFINES
#include "math.h"
using namespace std;

void main1() {
	setlocale(0, "");
	float a;
	float b;
	float c;
	float p, S, S1;
	float A, B, C; // ����
	cout << "������� �������" << endl;
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "S = " << S << endl;
	C = asin(2 * S / (a*b)); // ��� ����� ��������  C = asin(2 * S /a/b)
	A = asin(2 * S / (b*c));
	B = asin(2 * S / (a*c));
	cout << "����� ����� " << A + B + C << endl;
	cout << M_PI << endl;
	//system("pause");
	//return 0;
}