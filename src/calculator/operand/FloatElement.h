#pragma once
#ifndef FLOATELEMENT_H
#define FLOATELEMENT_H

#include <string>
#include "./RawElement.h"

class FloatElement : public RawElement{
	public:
	FloatElement();
	FloatElement(double n);
	FloatElement(std::string str);
	double getValue();
	std::string getType();
};

#endif
