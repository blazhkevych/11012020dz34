/*
* Пользователь 	вводит с клавиатуры размер в дюймах.Перевести его в сантиметры.
*/
#include <iostream>
#include <Windows.h>;
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	cout << "Введите размер в дюймах : \n";
	int a;
	cin >> a;
	cout << "см. = " << a * 2.54 << endl;
	return 0;
}
