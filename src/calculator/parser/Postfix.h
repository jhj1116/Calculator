#pragma once
#ifndef POSTFIX_H
#define POSTFIX_H

#include <stack>
#include <list>
#include "./Parser.h"
#include "../Data.h"


class Postfix {
	public:
	std::list <Data> pf;
	Postfix();
	std::list <Data> getPostfix(Parser* a);
	private:
	std::stack <Data> st;
};

#endif
