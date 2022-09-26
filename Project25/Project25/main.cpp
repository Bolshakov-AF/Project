#include <iostream>
#include "Portable.h"
#include "Desktop.h"
#include "Laptop.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	IElectronic* electronicsShop[5];

	electronicsShop[0] = new Computer(27, string("White\t"));
	electronicsShop[1] = new TV(65, string ("Black\t"));
	electronicsShop[2] = new Smartphone(2300, 6);
	electronicsShop[3] = new Tablet(4200, 8);
	electronicsShop[4] = new Laptop(15, 6600);

	bool open = true;
	while (open)
	{
		cout << "Выберите девайс : 1 - компьютер, 2 - телевизор, 3 - смартфон, 4 - планшет, 5 - ноутбук, 0 чтобы выйти" << endl;
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1:
			electronicsShop[0]->Show();
			break;
		case 2:
			electronicsShop[1]->Show();
			break;
		case 3:
			electronicsShop[2]->Show();
			break;
		case 4:
			electronicsShop[3]->Show();
			break;
		case 5:
			electronicsShop[4]->Show();
			break;
		case 0:
			open = false;
			break;

		default:
			cout << "Выберите девайс от 1 до 4 или 0, чтобы выйти" << endl;
			break;

		}
	}
	delete electronicsShop[0];
	delete electronicsShop[1];
	delete electronicsShop[2];
	delete electronicsShop[3];
	delete electronicsShop[4];

	return 0;
}
