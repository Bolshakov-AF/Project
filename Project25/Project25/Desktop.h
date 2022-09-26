#pragma once
#include "IElectronic.h"

class Desktop : virtual public IElectronic
{
public:
	Desktop(int display);

	void Show() override;
protected:
	int _display;
};

class Computer final : public Desktop
{
public:
	Computer(int display, string color);
	void Show() override;
private:
	string _color;
};

class TV final : public Desktop
{
public:
	TV(int display, string color);

	void Show() override;
private:
	string _color;
};


