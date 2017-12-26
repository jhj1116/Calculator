#include "./RawElement.h"
#include "./IntElement.h"
#include "./FloatElement.h"
#include <string>

RawElement::RawElement(){}

double RawElement::getValue(){
	return value;
}

std::string RawElement::getType(){
	return unitType;
}

RawElement RawElement::make(std::string str){
	if(str.find('.')==-1){
		IntElement newInt(str);
		return newInt;
	}
	else{
		FloatElement newFloat(str);
		return newFloat;
	}
}
