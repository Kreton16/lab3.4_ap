#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double a; // вхідний параметр
	double b; // вхідний параметр
	double R; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "R = "; cin >> R;
	// розгалуження в повній формі
	if ((x * x + y * y >= R * R && y <= b && x <= a && y >= 0)
		||
		(y <= 0 && x <= 0 && y >= -b && x * x + y * y <= R * R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}