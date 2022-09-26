#pragma once
#include<iostream>
using namespace std;

class IElectronic
{
public:
	virtual void Show() = 0;
	virtual ~IElectronic() = default;
};
