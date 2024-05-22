#include <iostream>
#include <cstdio>
#include <string>
#include <stack>
#include <map>

using namespace std;

int main() {
    char buf[300];
    map<char,int>priority = {
            {'$',0},
            {'+',1},{'-',1},
            {'*',2},{'/',2}
    };
    while(fgets(buf,300,stdin)!=NULL){
        string expr = buf;
        expr.pop_back();
        expr.push_back('$');//补充一个虚拟的终止符
        string num;
        stack<double>numstack;
        stack<char>operstack;
        for(unsigned i = 0;i<expr.size();i++){
            if (expr[i]>='0'&&expr[i]<='9'){
                num.push_back(expr[i]);
            }
            else{
                if(num != ""){
                    numstack.push(stod(num));
                    num = "";
                }
                while (!operstack.empty()&&priority[operstack.top()]>=priority[expr[i]
                ]){
                    char oper = operstack.top();
                    operstack.pop();
                    double rhs = numstack.top();
                    numstack.pop();
                    double lhs = numstack.top();
                    numstack.pop();
                    switch (oper) {
                        case '+':
                            numstack.push(lhs+rhs);
                            break;
                        case '-':
                            numstack.push(lhs-rhs);
                            break;
                        case '*':
                            numstack.push(lhs*rhs);
                            break;
                        case '/':
                            numstack.push(lhs/rhs);
                            break;
                    }
                }
                operstack.push(expr[i]);
            }
        }
        printf("%.0lf\n",numstack.top());
    }
    return 0;
}
