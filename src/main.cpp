#include <iostream>
#include "1lab.h"
#include "2lab.h"
#include "3lab.h"
#include "4lab.h"
#include <clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	int num=1;
	cout << "Введите номер работы или 0 для завершения: ";
	while (num != 0) {
		cin >> num;
		switch (num) {
		case 1:
			run_lab1();
			break;
		case 2:
			run_lab2();
			break;
		case 3:
			run_lab3();
			break;
		case 4:
			run_lab4();
			break;
		default:
			cout << "Неверный номер работы";
			break;
		}
		system("cls");
		cout << "Введите номер работы или 0 для завершения: ";
	}
	return 0;
}