#include <iostream>

using namespace std;
typedef unsigned short US;

#define K 30 //����� ����������� ��� � ����� �������� �� 30 (����� � � "" � '')
#define N 50
#define PRINT(x) cout << #x << " = " << (x) << endl

enum day { monday = 1, tuesday, wednesday, thutsday, friday, saturday, sanday };

void main(){
	setlocale(0, "");
	cout << "��� 1" << endl;
	cout << endl;
	//PRINT("hello");
	PRINT(N + 20);

	cout << endl;
	cout << "N = " << N << endl;
	short myShortVariable = 50;
	PRINT(sin(myShortVariable));

	system("pause");
}