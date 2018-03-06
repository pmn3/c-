#include <iostream>
#include "math.h"
using namespace std;

int main(){
	float A, B, C, D, E, S;
	setlocale(0, "");
	cout << "������� A" << endl;
	cin >> A;
	B = sin(A);
	//C = log10(abs(A));
        C = log10(A);
	D = exp(A);
	//E = abs(A);
        
	S = (A + B)*(A + B + C)*(A + B + C + D)*(A + B + C + D + E);
	cout << "A = " << A << endl;
	cout << "B = " << B << endl;
	cout << "C = " << C << endl;
	cout << "D = " << D << endl;
	cout << "E = " << E << endl;
	cout << "S = " << S << endl;

	//system("pause");
}