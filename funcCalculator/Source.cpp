#include "Header.h"
#include <iostream>
using namespace std;
void slojenie(float a, float b){
	cout << "��������: " << a << " + " << b << " = " << a + b << endl;
}
void vichitanie(float a, float b) {
	cout << "���������: " << a << " - " << b << " = " << a - b << endl;
}
void umnojenie(float a, float b) {
	cout << "���������: " << a << " * " << b << " = " << a * b << endl;
}
void delenie(float a, float b) {
	cout << "�������: " << a << " / " << b << " = " << a / b << endl;
}
void stepen(float a, float b) {
	float res = 1;
	for (int i = 1; i <= b; i++) {
		res *= a;
	}
	cout << "����� " << a << " � ������� " << b << " = " << res;
}
