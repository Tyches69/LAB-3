/*
 Ввести weeks и days (1..7). Вложенными циклами вывести номера тренировочных дней вида week-day.
 */

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "");

	int week, day;

	cout << "Введите количесвто недель:\n";
	cin >> week;

	cout << "Введите количество дней (1 -7):\n";
	do {
		cin >> day;
		if (day < 1 || day > 7) cout << "Ошибка! Введите число дней от 1 до 7\n";
	} while (day < 1 || day > 7);
	for (int w = 1; w <= week; w++) {

		for (int d = 1; d <= day; d++) {
			cout << w << "-" << d << " ";
		}

		cout << "\n";

	}

	return 0;
}
