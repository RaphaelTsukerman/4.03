// 4.03.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>


using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	struct Distance
	{
		int feet;
		float inches;
	};
	struct Volume
	{
		Distance height, weight, lenght;

	};
	Volume room1;
	room1.height.feet = 1;
	room1.height.inches = 0;
	room1.lenght.feet = 1;
	room1.lenght.inches = 0;
	room1.weight.feet = 1;
	room1.weight.inches = 0;
	float h, l, w;
	h = room1.height.feet + room1.height.inches / 12;
	w = room1.weight.feet + room1.weight.inches / 12;
	l = room1.lenght.feet + room1.lenght.inches / 12;
	cout << h * w*l << endl;


	system("pause");
    return 0;
}

