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
	cout << endl << "Начальная матрица 1:" << endl << m1 << endl << endl;
	cout << endl << "Начальная матрица 2:" << endl << m2 << endl << endl;

	cout << m1 * m2;

	/*m1.transposition();
	cout << endl << "Транспонирование матрицы 1:" << endl << endl << m1 << endl << endl;

	m1.DelRow();
	cout << endl << "Удаление строки матрицы 1 без атрибута:" << endl << endl << m1;


	m1.Full_Sort();
	cout << endl <<"Полная сортировка матрицы :" << endl << endl << m1;*/

	/*int* b = new int[10];
	for (size_t i = 0; i < 10; i++) b[i] = i;

	m1.AddRow(b, 2);
	cout << "Добавление строки: " << endl << m1 << endl << endl;

	m1.AddRow(b);
	cout << "Добавление строки без аргумента позиции: " << endl << m1 << endl << endl;


	m1.AddCol(b, 0);
	cout << "Добавление колонки: " << endl << m1 << endl << endl;

	m1.AddCol(b);
	cout << "Добавление колонки без аргумента позиции: " << endl << m1 << endl << endl;*/

	/*m2.randomFill(10, 100);

	cout << "Начальная матрица 1:" << endl << m1
		 << endl << endl
		 << "Начальная матрица 2:" << endl << m2
		 << endl << endl;
	
	cout << "Деление матриц:" << endl;
	cout << m1 / m2 << endl << endl;
	
	cout << "Умножение матриц:" << endl;
	cout << m1 * m2 << endl << endl;

	cout << "Сложение матриц:" << endl;
	cout << m1 + m2 << endl << endl;

	cout << "Вычитание матриц:" << endl;
	cout << m1 - m2 << endl << endl;

	cout << "Максимальный элемент(Первой матрицы) - " << m1.findMaxElem() << endl;
	cout << "Максимальный элемент(Второй матрицы) - " << m2.findMaxElem() << endl;

	cout << "Минимальный элемент(Первой матрицы) - " << m1.findMinElem() << endl;
	cout << "Минимальный элемент(Второй матрицы) - " << m2.findMinElem() << endl << endl;


	m1.lineByline_Sort();
	m2.lineByline_Sort();

	cout << "Отсартированая матрица 1:" << endl << m1
		<< endl << endl
		<< "Отсартированая матрица 2:" << endl << m2
		<< endl << endl;

	m1.Full_Sort();
	m2.Full_Sort();

	cout << "Полностью отсортированная матрица 1:" << endl << m1
		<< endl << endl
		<< "Полностью отсортированная матрица 2:" << endl << m2
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

	//cout << endl << "Конечный результат: " << endl << m1;
}
