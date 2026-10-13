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