#include "./IntElement.h"
#include <string>
#include <stdlib.h>

IntElement::IntElement(){}

IntElement::IntElement(int n){
	value = n;
	unitType = "integer";
}

IntElement::IntElement(std::string str){
	unitType ="integer";
	value = atoi(str.c_str());
}

double IntElement::getValue(){
	return value;
}

std::string IntElement::getType(){
	return unitType;
}
