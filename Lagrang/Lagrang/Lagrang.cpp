using namespace std;
#include <iostream>
#include <vector>

double interpolyac()
{
	double n, x, y, z, result=0;
	double currentX;
	cout << "Введите количество точек: \n";
	cin >> n;
	vector <double> vectorX(n), vectorY(n);
	cout << "Введите значения X: " << endl;

	for (int i = 0; i < n; i++) {
		cout << "Введите X" << i << "= ";
		cin >> x;
		vectorX.at(i) = x;
	}

	cout << "Введите значения Y: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "Введите Y" << i << "= ";
		cin >> y;
		vectorY.at(i) = y;
	}
	cout << "X: ";
	for (int i = 0; i < n; i++) {
		cout << vectorX.at(i) << "\t";
	}
	cout << endl;
	cout << "Y: ";
	for (int i = 0; i < n; i++) {
		cout << vectorY.at(i) << "\t";
	}
	cout << endl;
	////////////////////////////////////////////////
	cout << "Введите x: ";
	cin >> currentX;
	if ((currentX < vectorX.at(0)) || (currentX > vectorX.at(n - 1)))
		cout << "Введённый x не находится на данном промежутке";
	else{
		for (int i = 0; i < n; i++) {
			if ((currentX <= vectorX.at(i))) {
				z = i; break;
			}
		}
		result = (vectorY.at(z - 1)) + ((vectorY.at(z) - vectorY.at(z - 1)) / (vectorX.at(z) - vectorX.at(z - 1))) * (currentX - vectorX.at(z - 1));
	}
	return result;
}

int main()
{
	double rez = 0;
	setlocale(LC_ALL, "Rus");
	rez=interpolyac();
	cout << endl;
	cout << "Результат: " << rez;
	return 0;
}