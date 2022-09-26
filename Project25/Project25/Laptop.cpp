#include "Laptop.h"

Laptop::Laptop(int display, int battery) : Desktop(display), Portable(battery)
{

}

void Laptop::Show()
{
	cout << "Laptop:battery" << _battery << "\tdisplay" << _display << endl;
}