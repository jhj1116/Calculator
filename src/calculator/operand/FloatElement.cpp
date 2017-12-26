#include "./FloatElement.h"
#include <string>
#include <stdlib.h>

FloatElement::FloatElement(){}

FloatElement::FloatElement(double n){
	value = n;
	unitType = "float";
}

FloatElement::FloatElement(std::string str){
	value = atof(str.c_str());
	unitType = "float";
}

double FloatElement::getValue(){
	return value;
}

std::string FloatElement::getType(){
	return unitType;
}

