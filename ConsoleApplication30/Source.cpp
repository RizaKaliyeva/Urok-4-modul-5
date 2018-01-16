#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <math.h>
#include <conio.h>
#include <time.h>
using namespace std;

#define sizeArr 20

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int z;
	do
	{
		cout << "Kakoe zadanie?" << endl;
		cin >> z;
		switch (z)
		{
		case 1:
		{
			//1.	Дано целое число в двоичной системе счисления, т.е.последовательность цифр  0 и 1. Составить программу перевода этого числа в десятичную систему счисления
			int m[20], a, i = 19, k = 0;
			cout << "Vvedite chislo : " << endl;
			cin >> a;
			while (a > 0)
			{
				if (a % 2 != 0)
					m[i] = 1;
				
				else
					m[i] = 0;

				a = a / 2;
				i--;
			}
			for (i = 0; i < 20; i++)
			{
				if (m[i] >= 0)
				{
					cout << m[i] << endl;
					k++;
				}
			}
			cout << k << endl;
			a = 0;
			int j = 19;
			for (i = 0; i < k; i++)
			{
					a += m[j] * pow(2, i);
					j--;
			}
			cout << "a = " << a << endl;
			cout << "-------------------------------" << endl;
			
		}
		break;

		case 2:
		{
			//2.	В прямоугoльной матрице найти наибольший из минимальных элементов строк матрицы
			int m[4][4] = { {0},{0} }, min = m[0][0], b[4], k;

			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					m[i][j] = 0 + rand() % 100;
					cout << m[i][j] << "\t";
				}
				cout << endl;
			}
			for (int i = 0; i < 4; i++)
			{
				min = m[i][0];
				for (int j = 0; j < 4; j++)
				{
					if (min > m[i][j])
					{
						min = m[i][j];
					}
				}
				b[i] = min;

				cout << b[i] << endl;
				cout << "----" << endl;
			}
			for (int i = 0; i < 4; i++)
			{
				for (int j = 3; j >= 0; j--)
				{
					if (b[j] < b[j - 1])
					{
						k = b[j-1];
						b[j - 1] = b[j];
						b[j] = k;
					}
				}
				cout << b[i] << endl;
			}
			cout << "Naibol'shii = " << b[3] << endl;
		}
		break;

		case 3:
		{
			/*3.	Ввести массив, состоящий из 15 - ти элементов(двузначные целые числа).
				Изменить разрядность цифр, образующих элементы исходного массива и, таким образом, сформировать новый массив.Например, исходный массив : 25 71 84…, новый массив : 52 17 48….*/
			int m[15], k, k1;
			for (int i  = 0; i < 15; i++)
			{
				m[i] = 10 + rand() % 80;
				cout << m[i] << endl;
			}
			cout << "------------" << endl;
			for (int j = 0; j < 15; j++)
			{
			    k = m[j] / 10;
			    k1 = m[j] % 10;
				m[j] = k1 * 10 + k;
			}
			for (int j = 0; j < 15; j++)
			{
				cout << m[j] << endl;
			}
		}
		break;

		case 4:
		{
			/*4.	Ввести массив, состоящий из 9 элементов(девять двузначных чисел в восьмеричной системе счисления).\
				Сформировать новый массив  путем перевода значений элементов исходного массива в десятичную систему счисления*/
			int m[5][3] = { {0},{0} };
			for (int i = 0; i < 5; i++)
			{
				m[5][3] = 10 + rand() % 80;
				m[i][1]= m[i][0] / 10;
				m[i][2] = m[i][0] % 10;
				cout << m[i][i] << endl;
			}
			int sum = 0;
			cout << "------------" << endl;
			for (int j = 0; j < 5; j++)
			{
				for (int i = 0; i < 3; i++)
				{
					cout << m[j][i] << "\t";
				}
			}
		}
		break;

		}
	} while (z <= 0);

	system("pause");
}