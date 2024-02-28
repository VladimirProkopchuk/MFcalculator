#include <iostream>
#include "Header.h"
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	float a; float b;
	cout << "Введите первое число: ";
	cin >> a ;
	cout << "Введите второе число:  ";
	cin >> b;
    int n = 0;
    cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    cin >> n;
	switch (n)
	{ 
	case 1:  slojenie (a, b);
		break; 
	case 2: vichitanie (a, b);
		break;
	case 3: umnojenie (a, b);
		break;
	case 4: delenie (a, b);
		break;
	case 5: stepen(a,b);
		break;
	default:
		cout << "Вы ввели не корректные данные";
	}

}

