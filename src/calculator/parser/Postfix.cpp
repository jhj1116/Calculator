#include "./Postfix.h"
#include "./Parser.h"
#include "../operator/Op.h"
#include "../Data.h"
#include <stack>
#include <vector>
#include <list>
#include <string>


Postfix::Postfix(){}

std::list <Data> Postfix::getPostfix(Parser* u){
	std::vector <Data> final = u->getFin();
	Op eos;
	st.push(eos);
	final.push_back(eos);
	for(int i=0; i<final.size(); i++){
		if(final[i].getType()!="Op"){
			if(final[i].getType()=="float"||final[i].getType()=="integer"){
				pf.push_back(final[i]);
			}
			else if(final[i].getType()=="closeB"){
				while(st.top().getType()!="openB"){
					Data temp = st.top(); st.pop();
					pf.push_back(temp);
				}
				st.pop();
			}
			else{
				while(st.top().getPriority()>=final[i].getPriority()){
					pf.push_back(st.top()); st.pop();
				}
				st.push(final[i]);
				if(final[i].getType()=="openB"){
					st.top().setPriority(0);
				}
			}
		}
		else{
			while(st.top().getType()!="Op"){
				Data tmp = st.top(); st.pop();
				pf.push_back(tmp);	
			}
		}
	}
	return pf;
}
