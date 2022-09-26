#pragma once

#include "Portable.h"
#include "Desktop.h"

class Laptop final : public Desktop, Portable
{
public:
	Laptop(int display, int battery);

	void Show() override;
};

