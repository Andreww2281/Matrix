#include "Matrix.h"
#include <iostream>


using namespace std;

int main()
{
	srand(time(0));
	setlocale(0, "");
	Matrix<int> m1(2, 2);
	Matrix<int> m2(2, 3);

	cin >> m1;
	system("cls");
	cin >> m2;

	/*m1.randomFill(12.2, 33.6);*/
	cout << endl << "��������� ������� 1:" << endl << m1 << endl << endl;
	cout << endl << "��������� ������� 2:" << endl << m2 << endl << endl;

	cout << m1 * m2;

	/*m1.transposition();
	cout << endl << "���������������� ������� 1:" << endl << endl << m1 << endl << endl;

	m1.DelRow();
	cout << endl << "�������� ������ ������� 1 ��� ��������:" << endl << endl << m1;


	m1.Full_Sort();
	cout << endl <<"������ ���������� ������� :" << endl << endl << m1;*/

	/*int* b = new int[10];
	for (size_t i = 0; i < 10; i++) b[i] = i;

	m1.AddRow(b, 2);
	cout << "���������� ������: " << endl << m1 << endl << endl;

	m1.AddRow(b);
	cout << "���������� ������ ��� ��������� �������: " << endl << m1 << endl << endl;


	m1.AddCol(b, 0);
	cout << "���������� �������: " << endl << m1 << endl << endl;

	m1.AddCol(b);
	cout << "���������� ������� ��� ��������� �������: " << endl << m1 << endl << endl;*/

	/*m2.randomFill(10, 100);

	cout << "��������� ������� 1:" << endl << m1
		 << endl << endl
		 << "��������� ������� 2:" << endl << m2
		 << endl << endl;
	
	cout << "������� ������:" << endl;
	cout << m1 / m2 << endl << endl;
	
	cout << "��������� ������:" << endl;
	cout << m1 * m2 << endl << endl;

	cout << "�������� ������:" << endl;
	cout << m1 + m2 << endl << endl;

	cout << "��������� ������:" << endl;
	cout << m1 - m2 << endl << endl;

	cout << "������������ �������(������ �������) - " << m1.findMaxElem() << endl;
	cout << "������������ �������(������ �������) - " << m2.findMaxElem() << endl;

	cout << "����������� �������(������ �������) - " << m1.findMinElem() << endl;
	cout << "����������� �������(������ �������) - " << m2.findMinElem() << endl << endl;


	m1.lineByline_Sort();
	m2.lineByline_Sort();

	cout << "�������������� ������� 1:" << endl << m1
		<< endl << endl
		<< "�������������� ������� 2:" << endl << m2
		<< endl << endl;

	m1.Full_Sort();
	m2.Full_Sort();

	cout << "��������� ��������������� ������� 1:" << endl << m1
		<< endl << endl
		<< "��������� ��������������� ������� 2:" << endl << m2
		<< endl << endl;*/


	/*m1.randomFill(1, 100);
	m1.KbInput();
	m2 = m1;
	cout << m1 << endl << endl;*/


	//m1.DelRow(0);
	//m1.DelCol(0);

	//cout << endl << m1 << endl << endl;
	//m2.transposition();
	//cout << m2 << endl << endl;

	//Matrix<int> m1(2, 2);

	//m1.KbInput();
	//m1.Full_Sort();

	//cout << endl << "�������� ���������: " << endl << m1;
}
