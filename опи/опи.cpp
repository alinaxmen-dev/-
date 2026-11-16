#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x;
	float y;
	setlocale(LC_ALL, "Russian");
	cout << " Введите вес в граммах ";
	cin >> x;
	y = x / 28.3;
	cout << "Вес в унциях " << y << endl;
	cout << "67" << endl;
}
