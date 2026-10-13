/*
С помощью while вводить длительности тренировок до ввода 0. Отрицательные значения пропускать. 
Найти общее время и количество тренировок не короче 60 минут.
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "");

	int time = 1;
	int totaltime = 0;
	int totaln = 0;

	while (time != 0) {

		cout << "Введите время тренировки:\n";
		cin >> time;

		if (time < 0) cout << "Ошибка! Введено отрицательное значение";
		else if (time > 60) {
			totaltime += time;
			totaln++;
		}
	}

	cout << "Общее количесвто тренировок:" << totaln << ". Общее время:" << totaltime;
	return 0;
}
