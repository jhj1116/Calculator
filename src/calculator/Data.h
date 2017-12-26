#pragma once
#ifndef DATA_H
#define DATA_H

#include <string>

class Data{
	public:
	Data();
	virtual std::string getType();
	virtual int getPriority();
	void setPriority(int n);
	virtual double getValue();
	virtual bool operator==(const Data &D) const;
	bool operator!=(const Data &D) const;
	protected:
	std::string unitType;
	int priority;
	double value;
};

#endif
