#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int i;
	int a;
	setlocale(0, "");
	printf("цикл do while\n");
	cout << "введите a " << endl;
	cin >> a ;
	i = 0;
	do {
		i++;
		cout << "i = " << i << endl;
	}
	while (i <= a);
	
	return 0;
}
