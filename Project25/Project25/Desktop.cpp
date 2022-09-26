#include "Desktop.h"
Desktop::Desktop(int display) : _display(display)
{

}

void Desktop::Show()
{
	cout << "Basic Desktop display: " << _display << endl;
}

Computer::Computer(int display, string color) : Desktop(display), _color(color)
{

}

void Computer::Show()
{
	cout << _color << "Computer, display: " << _display << endl;
}

TV::TV(int display, string color) : Desktop(display), _color(color)
{

}

void TV::Show()
{
	cout << _color << "TV, display: " << _display << endl;
}
