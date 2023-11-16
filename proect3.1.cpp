#include<iostream>
using namespace std;

int main() {

	setlocale(LC_ALL, "ukr");

	double N;
	cout << "Ввести число N";
	cin >> N;

	double arr[50];
	for (int i = 0; i < N; i++) {
		cout << "Ведіть " << i + 1 << "-й значення ";
		cin >> arr[i];
	}


	double maxE = 0;
	for (int i = 0; i < N; i++) {
		if (arr[i] > maxE) {
			maxE = arr[i];

		}

	}
	double sum = 0;
	for (int i = 0; i < N; i++) {
		sum += arr[i];
	}



	cout << "Максимальний елемент масиву " << maxE << endl;
	cout << "Сума усіх чисел масиву " << sum;
	return 0;
}
