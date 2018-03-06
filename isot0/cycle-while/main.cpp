#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int i;
	setlocale(0, "");
	printf("цикл while\n");
	
	i = 0;
	while (i <= 10) {
		cout << "i = " << i << endl;
		i++;
		}
	
	
	return 0;
}
