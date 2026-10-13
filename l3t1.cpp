#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	int n;

	cout << "Введите колчество тренировок (1-20):\n";
	cin >> n;

	if (n < 1 || n> 20) {
		cout << "Ошибка!";
		return 1;
	}
	int tcal = 0;

	for (int i = 1; i <= n; i++) {
		int cal = 100 + 20 * i;
		cout << "Тренировка " << i << ":" << cal << endl;
        
		tcal += cal;
	}

	cout << "Общие калории:" << tcal;

	return 0;
}