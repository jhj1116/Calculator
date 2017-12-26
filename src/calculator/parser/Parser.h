#pragma once
#ifndef PARSER_H
#define PARSER_H

#include <list>
#include <string>
#include <vector>
#include "../Data.h"


class Parser {
	public:
	std::vector <Data> fin2;
	std::list <Data> goPostfix();
	Parser();
	Parser(std::string str);
	void getInfix(std::string str);
	std::vector <Data> getFin();
	private:
	std::vector <Data> fin;
	std::vector <std::string> v;
	std::vector <std::string> k;
};

#endif
