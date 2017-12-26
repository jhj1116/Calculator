#include <stdlib.h>
#include <iostream>
#include "./calculator/Calculator.h"

int main(int argc, char* argv[])
{
	Calculator* cal = new Calculator("1+2");
	std::cout << cal->getValue() << std::endl;
	
	cal->setString("3*(2+1)");
	std::cout << cal->getValue() << std::endl;

	Calculator* cal2 = new Calculator("2*4%2");
	std::cout << cal2->getValue() << std::endl;

	Calculator* cal3 = new Calculator("6%5*3");
	std::cout << cal3->getValue() << std::endl;

	Calculator* cal4 = new Calculator("3*sin(4*PI)");
	std::cout << cal4->getValue() << std::endl;

	Calculator* cal5 = new Calculator("4*cos((2+1)*PI)");
	std::cout << cal5->getValue() << std::endl;

	Calculator* cal6 = new Calculator("3*cos(4)*sin(4)");
	std::cout << cal6->getValue() << std::endl;

	delete cal;
	delete cal2;
	delete cal3;
	delete cal4;
	delete cal5;
	delete cal6;
	
	system("pause");
}
