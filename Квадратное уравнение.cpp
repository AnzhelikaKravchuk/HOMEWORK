#include "stdafx.h"
#include "iostream"
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Квадратное уравнение имеет вид ax^2+bx+c=0.\nПожалуйста, введите в строку коэффициенты a, b и c\n(Учтите, что коэффицент a должен быть отличен от нуля!)" << endl;
	double a, b, c;
	cin >> a >> b >> c;
	while (a == 0)
	{
		if (c > 0)
		{
			cout << "Введенное Вами уравнение имеет вид: " << b << "x+ " << c << " = 0 " << endl;
		}
		if (c < 0)
		{
			cout << "Введенное Вами уравнение имеет вид: " << b << "x " << c << " = 0 " << endl;
		}
		cout << "Коэффицент 'a' не может быть равен нулю! Введите данный заново" << endl;
		cin >> a >> b >> c;
	}
	cout << "Введенное Вами уравнение имеет вид: " << a << "x^2+ " << b << "x+ " << c << " = 0 " << endl;
	double discr = b * b - 4 * a*c;
	if (discr < 0)
	{
		cout << "Введенное вами уравнение не имеет решений" << endl;
	}
	else if (discr > 0)
	{
		double res1, res2;
		res1 = ((-b + sqrt(discr)) / (2 * a));
		res2 = ((-b - sqrt(discr)) / (2 * a));
		cout << "Решениями уравения являются числа " << res1 << " и " << res2 << endl;;
	}
	else if (discr == 0)
	{
		double res0;
		res0 = (-b) / (2 * a);
		cout << "Решениeм уравения являeтся число " << res0 << endl;
	}
	return 0;
}


