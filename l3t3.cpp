#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "");

	int pulse = 0;

		do {
			cout << "Введите пульс:\n";
			cin >> pulse;
			if (pulse < 30 || pulse > 120) cout << "Пульс должен быть в диапозоне от 30 до 120\n";
		} while (pulse < 30 || pulse > 120);

		if (pulse < 60) cout << "Ваш пульс в диапозоне от 30 до 60";
		else if (pulse < 80) cout << "Ваш пульс в диапозоне от 60 до 80";
		else cout << "Ваш пульс в диапозоне от 80 до 120";

		return 0;
}