#include <iostream>

using namespace std;
typedef unsigned short US;

#define K 30 //перед компиляцией все К будут заменены на 30 (кроме К в "" и '')
#define N 50
#define PRINT(x) cout << #x << " = " << (x) << endl

enum day { monday = 1, tuesday, wednesday, thutsday, friday, saturday, sanday };

void main(){
	setlocale(0, "");
	cout << "упр 1" << endl;
	cout << endl;
	//PRINT("hello");
	PRINT(N + 20);

	cout << endl;
	cout << "N = " << N << endl;
	short myShortVariable = 50;
	PRINT(sin(myShortVariable));

	system("pause");
}