#include <iostream>
#include <math.h>

using namespace std;
void main() {
//int main() {
	float x, y, y2;
	setlocale(0,"");
	cout << "введите X" << endl;
	cin >> x;
	if (x < -3)
		y = -1 / x;
	else if (x < 0)
		y = sqrt(-x);
		else if (x <= 1)
		y = x*x;
			else y = sqrt(x);
	
		cout << "y = " << y << endl;

		if (x < -1)
			y2 = -1 / x;
		if (-3 <= x && x < 0) //(-3<=x<0)
			y2 = sqrt(-x);
		if (x >= 0 && x < 1)
			y2 = x*x;
		if (x >= 1)
			y2 = sqrt(x);
		
		cout << "y2 = " << y2 << endl;

	system("pause");
//	return 0;
}
