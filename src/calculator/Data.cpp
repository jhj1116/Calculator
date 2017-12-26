#include "Data.h"
#include <string>

Data::Data(){}

std::string Data::getType(){
	return unitType;
}

int Data::getPriority(){
	return priority;
}

double Data::getValue(){
	return value;
}


bool Data::operator==(const Data &D) const{
	return (*this ==D);
}

bool Data::operator!=(const Data &D) const{
	return !(*this ==D);
}

void Data::setPriority(int n){
	priority=n;
}
