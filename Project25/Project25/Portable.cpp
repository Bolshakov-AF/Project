#include "Portable.h"
Portable::Portable(int battery) : _battery(battery)
{

}

void Portable::Show() { cout << "Basic Portable battery: " << _battery << endl; }

Smartphone::Smartphone(int battery, int display) : Portable(battery), _display(display)
{

}

void Smartphone::Show()
{
	cout << "Smartphone, display: " << _display << "\tbattery: " << _battery << endl;
}

Tablet::Tablet(int battery, int display) : Portable(battery), _display(display)
{

}

void Tablet::Show()
{
	cout << "Tablet, size: " << _display << "\tbattery capacity: " << _battery << endl;
}
