#define _USE_MATH_DEFINES
#include <math.h>
#include "./Parser.h"
#include "./Postfix.h"
#include "../Data.h"
#include "../operator/BraketOp.h"
#include "../operator/Plus.h"
#include "../operator/Minus.h"
#include "../operator/Mul.h"
#include "../operator/Div.h"
#include "../operator/Mod.h"
#include "../operator/Exp.h"
#include "../operator/Sin.h"
#include "../operator/Cos.h"
#include "../operand/RawElement.h"
#include "../operand/IntElement.h"
#include "../operand/FloatElement.h"
#include <vector>
#include <string>

Parser::Parser(){}

Parser::Parser(std::string str){
	for(int i=0; i<str.size(); i++){
		std::string arg = str.substr(i,1);
		v.push_back(arg);
	}
}

std::list <Data> Parser::goPostfix(){
	Postfix test;
	std::list <Data> temp = test.getPostfix(this);
	return temp;
}

std::vector <Data> Parser::getFin(){
	return fin2;
}

void Parser::getInfix(std::string str){
	int tmp = 0;
	v.push_back("end");
	for(int i=0; i<v.size(); i++){
		if(v[i].compare("P")==0){
			k.push_back("PI");
			tmp+=2;
			i+=1;
		}
		else if(v[i].compare("s")==0){
			k.push_back("sin");
			tmp+=3;
			i+=2;
		}
		else if(v[i].compare("c")==0){
			k.push_back("cos");
			tmp+=3;
			i+=2;
		}
		else if(v[i].compare("(")==0 || v[i].compare(")")==0 || v[i].compare("+")==0 || v[i].compare("-")==0 || v[i].compare("*")==0 || v[i].compare("/")==0 || v[i].compare("%")==0 || v[i].compare("end")==0 || v[i].compare("^")==0){
			int len = i -tmp;
			if(len>0){
				std::string args = str.substr(tmp,len);
				k.push_back(args);
				if(v[i].compare("end")!=0){
					k.push_back(v[i].c_str());
				}
				tmp = i+1;
			}
			else{
				if(v[i].compare("end")!=0){
					k.push_back(v[i].c_str());
					tmp++;
				}
			}
		}
	}
	for(int p=0; p<k.size(); p++){
		if(k[p].compare("+")==0){
			fin.push_back(Plus());
		}
		else if(k[p].compare("-")==0){
			fin.push_back(Minus());
		}
		else if(k[p].compare("*")==0){
			fin.push_back(Mul());
		}
		else if(k[p].compare("/")==0){
			fin.push_back(Div());
		}
		else if(k[p].compare("%")==0){
			fin.push_back(Mod());
		}
		else if(k[p].compare("(")==0){
			fin.push_back(BraketOp("("));
		}
		else if(k[p].compare(")")==0){
			fin.push_back(BraketOp(")"));
		}
		else if(k[p].compare("^")==0){
			fin.push_back(Exp());
		}
		else if(k[p].compare("sin")==0){
			fin.push_back(Sin());
		}
		else if(k[p].compare("cos")==0){
			fin.push_back(Cos());
		}
		else if(k[p].compare("PI")==0){
			FloatElement pi = M_PI;
			fin.push_back(pi);
		}
		else {
			RawElement newData;
			RawElement real = newData.make(k[p]);
			fin.push_back(real);
		}
	}
	for(int q=0; fin.size(); q++){
		if(fin[q].getType() == "Minus"){
			if(q==0){
				fin2.push_back(IntElement(-1));
				fin2.push_back(Mul());
			}
			else if(fin[q-1].getType()=="Plus" || fin[q-1].getType()=="Minus" || fin[q-1].getType()=="Mul" || fin[q-1].getType()=="Div" || fin[q-1].getType()=="Mod" ||fin[q-1].getType()=="openB"||fin[q-1].getType()=="closeB"||fin[q-1].getType()=="Op"||fin[q-1].getType()=="Exp"||fin[q-1].getType()=="Sin"||fin[q-1].getType()=="Cos"){
				fin2.push_back(IntElement(-1));
				fin2.push_back(Mul());
			}
			else{
				fin2.push_back(fin[q]);
			}
		}
		else{
			fin2.push_back(fin[q]);
		}
	}
}
