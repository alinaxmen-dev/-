#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x, y;
	setlocale(LC_ALL, "Russian");
	cout << " Введите вес в граммах ";
	cin >> x;
	y = x / 28.3;
	cout << "Вес в унциях " << y;
}
