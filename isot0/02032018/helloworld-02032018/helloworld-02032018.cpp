// helloworld-02032018.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h" 

// ����������� ������������ ����������� 
// ���������� �������������� �������. 
#include "math.h" 

using namespace std;

#define u1
//��������� ������� Ruc, �������� ��. ����. 
char* Ruc(char s[]);

int _tmain1(int argc, _TCHAR* argv[])
{
	printf("02.03.2018\n");
	setlocale(0, "");
	//-----
	// ���������� ���������� 
	double const g = 9.8; /*����������� ���������,
						 �������������� ���������. */
	double T;/*���������� ������������� ����, ������� �����
			������������ ������� �����. */
	int S;//���������� ������ ����, �������������� ����� ����. 
	// ��������� 
	//����� ����������� � ����� �������� ���������� S . 
	//���� \ � ����� ������ ������ ������ ��������� ���������� 
	//������� ������ ��������� �� ������ ����� ������. 
#ifdef u1
//printf(Ruc("��������� ��������� �����, �� ������� ���� ��� ��������� %f\n ������ �������� ����.\n"), g); 
		//printf(Ruc("������� ����� ���� � ������: "));
	std::cout << "��������� ��������� �����, �� ������� ���� ��� ���������  ������ �������� ����." << g << std::endl;
	std::cout <<"������� ����� ���� � ������: ";
	

	//���� �������� ���������� S. 
	//scanf_s("%d", &S);
		std::cin >> S;
//#endif
#else
S = 10;
#endif
	//���������� ������� �������� ���� �� �������� ����. 
	//�������������� ������� sqrt ��������� ���������� ������. 
	T = sqrt(S * 2 / g);
	//����� ���������� � �����������. 
	//printf("%s T=%.2f", Ruc("���� ����� ������� �� "), T);
	//printf("%s\n", Ruc(" ������."));

	std::cout << "T = " << "���� ����� ������� �� " << T ;
	std::cout << " ������." << std::endl;

	//�������� �������� ���� ��������� �� ������� �������. 
	
	//-----
	_gettch();
	return 0;
}

char* Ruc(char s[])
{ //������� ��������������� ������� ���� 
	//��� ������ � ���� ���������. 
	int i;
	static char ss[257];
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= -64 && s[i] <= -17)
			ss[i] = (-64 + s[i]); //�..� 
		else if (s[i] >= -16 && s[i] <= 0)
			ss[i] = (char)(-16 + s[i]); //�..� 
		else if (s[i] == -72)
			ss[i] = (char)(-15); //� 
		else if (s[i] == -88)
			ss[i] = (char)(-16); //� 
		else
			ss[i] = s[i];
	}
	ss[i] = '\0';
	return ss;
}