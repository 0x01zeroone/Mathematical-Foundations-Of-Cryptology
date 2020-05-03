#include <iostream>
#include <cmath>
using namespace std;
int ext_gcd(int a, int b, int& x, int& y)
{
int q, r, x1, x2, y1, y2, d;
if (b == 0) {
d = a, x = 1, y = 0;
return d;
}
x2 = 1, x1 = 0, y2 = 0, y1 = 1;
while (b > 0) {
q = a / b, r = a - q * b;
x = x2 - q * x1, y = y2 - q * y1;
a = b, b = r;
x2 = x1, x1 = x, y2 = y1, y1 = y;
}
d = a, x = x2, y = y2;
return abs(d);
}
int main() {
setlocale(LC_ALL, "RUS");
int a, b, x, y;
int flag;
do {
cout << "Меню" << endl;
cout << "1. Нахождение НОД по A и B" << endl;
cout << "2. Нахождение обратного элемента по e и f(n)" << endl;
cout << "3. Нахождение по теореме Ферма" << endl;
cout << "4. Нахождение по теореме Эйлера-Ферма" << endl;
cout << "5. Выйти из программы" << endl;
cout << "Ваш выбор: " << endl;
cin >> flag;
switch (flag) {
case 1: {
cout << "Введите значение A = ";
cin >> a;
cout << "Введите значение B = ";
cin >> b;
cout << "НОД(" << a << "," << b << ") = " << ext_gcd(a, b, x, y) << " (Расширеный Алгоритм Евклида)" << endl;
cout << "A mod B = " << a % b << endl;
cout << "A / B = " << a / b << endl;
cout << "x = " << x << endl;
cout << "y = " << y << endl;
cout << "Пара (x, y) = (" << x << "," << y << "), дающая решение уравнению " << a << "x + " << b << "y = " << ext_gcd(a, b, x, y) << endl;
break;
}
case 2: {
cout << "Введите значение f(n) = ";
cin >> a;
cout << "Введите значение e = ";
cin >> b;
cout << "НОД(" << a << "," << b << ") = " << ext_gcd(a, b, x, y) << " (Расширеный Алгоритм Евклида)" << endl;
cout << "A mod B = " << a % b << endl;
cout << "A / B = " << a / b << endl;
cout << "x = " << x << endl;
cout << "y = " << y << endl;
cout << "Обратный элемент = " << y << endl;
while (y < 0) {
y = y + a;
cout << "d = " << y % a << endl;
}
break;
}
case 3: {
cout << "Введите число: ";
cin >> b;
cout << "Введите mod: ";
cin >> a;
cout << "НОД(" << a << "," << b << ") = " << ext_gcd(a, b, x, y) << endl;
if (y > 0) {
cout << "Обратный элемент = " << y << endl;
}
else {
while (y < 0) {
y = y + a;
cout << "Обратный элемент = " << y % a << endl;
}
}
break;
}
case 4: {
cout << "Введите число: ";
cin >> b;
cout << "Введите mod: ";
cin >> a;
cout << "НОД(" << a << "," << b << ") = " << ext_gcd(a, b, x, y) << endl;
if (y > 0) {
cout << "Обратный элемент = " << y << endl;
}
else {
while (y < 0) {
y = y + a;
cout << "Обратный элемент = " << y % a << endl;
}
}
break;
}
default:
break;
}
}
while (flag != 5);
}
