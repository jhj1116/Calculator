#include "./Exp.h"
#include <string>
#include <math.h>
#include "../operand/FloatElement.h"
#include "../operand/IntElement.h"

Exp::Exp(){
	unitType = "Exp";
	priority = 13;
}

RawElement Exp::calculate(RawElement e1, RawElement e2){
	if(e1.getType()=="float"||e2.getType()=="float")
		return FloatElement(pow(e1.getValue(),e2.getValue()));
	else
		return IntElement(pow((int)e1.getValue(),(int)e2.getValue()));
}

int Exp::getPriority(){
	return priority;
}

std::string Exp::getType(){
	return unitType;
}
