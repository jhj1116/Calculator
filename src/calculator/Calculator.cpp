#include "./Calculator.h"
#include "./parser/Parser.h"
#include "./parser/Postfix.h"
#include "./operand/RawElement.h"
#include "./operator/Plus.h"
#include "./operator/Minus.h"
#include "./operator/Mul.h"
#include "./operator/Div.h"
#include "./operator/Mod.h"
#include "./operator/Exp.h"
#include "./operator/Sin.h"
#include "./operator/Cos.h"
#include <stack>
#include <string>

Calculator::Calculator(){}

Calculator::Calculator(std::string str){
	Parser req(str);
	req.getInfix(str);
	postFix = req.goPostfix();
}

double Calculator::getValue(){
	std::stack <RawElement> ans;
	while(postFix.empty()==0){
		if(postFix.front().getType()=="integer" || postFix.front().getType()=="float"){
		ans.push(*static_cast<RawElement*>(&postFix.front()));
		postFix.pop_front();
		}
		else if(postFix.front().getType()=="Plus"){
			postFix.pop_front();
			RawElement tmp1 = ans.top();
			ans.pop();
			RawElement tmp2 = ans.top();
			ans.pop();
			Plus tests;
			RawElement answer = tests.calculate(tmp2,tmp1);
			ans.push(answer);
		}
		else if(postFix.front().getType()=="Minus"){
			postFix.pop_front();
			RawElement tmp1 = ans.top();
			ans.pop();
			RawElement tmp2 = ans.top();
			ans.pop();
			Minus tests;
			RawElement answer = tests.calculate(tmp2,tmp1);
			ans.push(answer);
		}
		else if(postFix.front().getType()=="Mul"){
			postFix.pop_front();
			RawElement tmp1 = ans.top();
			ans.pop();
			RawElement tmp2 = ans.top();
			ans.pop();
			Mul tests;
			RawElement answer = tests.calculate(tmp2,tmp1);
			ans.push(answer);
		}
		else if(postFix.front().getType()=="Div"){
			postFix.pop_front();
			RawElement tmp1 = ans.top();
			ans.pop();
			RawElement tmp2 = ans.top();
			ans.pop();
			Div tests;
			RawElement answer = tests.calculate(tmp2,tmp1);
			ans.push(answer);
		}
		else if(postFix.front().getType()=="Mod"){
			postFix.pop_front();
			RawElement tmp1 = ans.top();
			ans.pop();
			RawElement tmp2 = ans.top();
			ans.pop();
			Mod tests;
			RawElement answer = tests.calculate(tmp2,tmp1);
			ans.push(answer);
		}
		else if(postFix.front().getType()=="Exp"){
			postFix.pop_front();
			RawElement tmp1 = ans.top();
			ans.pop();
			RawElement tmp2 = ans.top();
			ans.pop();
			Exp tests;
			RawElement answer = tests.calculate(tmp2,tmp1);
			ans.push(answer);
		}
		else if(postFix.front().getType()=="Sin"){
			postFix.pop_front();
			RawElement tmp1 = ans.top();
			ans.pop();
			Sin tests;
			RawElement answer = tests.calculate(tmp1);
			ans.push(answer);
		}
		else if(postFix.front().getType()=="Cos"){
			postFix.pop_front();
			RawElement tmp1 = ans.top();
			ans.pop();
			Cos tests;
			RawElement answer = tests.calculate(tmp1);
			ans.push(answer);
		}
	}
	return ans.top().getValue();
}

void Calculator::setString(std::string str){
	Parser test(str);
	test.getInfix(str);
	postFix = test.goPostfix();
}
