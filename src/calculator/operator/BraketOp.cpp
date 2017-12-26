#include "./BraketOp.h"
#include <string>
#include <iostream>

BraketOp::BraketOp(){}

BraketOp::BraketOp(std::string str){
	if(str=="("){
		priority = 20;
		unitType = "openB";
	}
	else if(str==")"){
		priority = 19;
		unitType = "closeB";
	}
	else{
		try{
			throw "Wrong input error! Braket only deals with ()";
		}
		catch(char* msg){
			std::cout << msg <<std::endl;
		}
	}
}

int BraketOp::getPriority(){
	return priority;
}

std::string BraketOp::getType(){
	return unitType;
}
