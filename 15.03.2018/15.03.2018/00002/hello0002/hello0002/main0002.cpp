#include <iostream>
#include <math.h>

using namespace std;
void main() {
	char ch, x, y, y2;
	setlocale(0, "");
	do {
	cout << "введите символ" << endl << "a - Play game" << endl << "m - Multiplayer" << endl << "s - Save game" << endl << "q - exit" << endl;
	cin >> ch;
	switch (ch) {
	case 'a': {
				  cout << "play game" << endl;
				  break;
	}
	case 'q': return; // return - выход из программы
	case 'm': {
				  cout << "Multiplayer" << endl;
				  break;
	}
	case 's': {
				  cout << "Save game" << endl;
				  break;
	}
	default: cout << "EROR" << endl;

	}
	} while (ch != '.');
		//cout << "ch = " << ch << endl;

	system("pause");
	//	return 0;
}