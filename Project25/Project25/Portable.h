#pragma once
#include "IElectronic.h"

class Portable : virtual public IElectronic
{
public:
	Portable(int battery);
	void Show() override;

protected:
	int _battery;
};

class Smartphone final : public Portable
{
public:
	Smartphone(int battery, int display);
	void Show() override;

private:
	int _display;
};

class Tablet final : public Portable
{
public:
	Tablet(int battary, int display);
	void Show() override;

private:
	int _display;
};


