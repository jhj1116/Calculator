#include "./Op.h"
#include <string>

Op::Op(){
	unitType = "Op";
	priority = 0;
}

int Op::getPriority(){
	return priority;
}

std::string Op::getType(){
	return unitType;
}

void Op::setPriority(int n){
	priority =n ;
}
