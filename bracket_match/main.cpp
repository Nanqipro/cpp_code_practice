#include <iostream>
#include <cstdio>
#include <stack>
#include <string>
using namespace std;

int main() {
    char buf[1000];
    while (fgets(buf,1000,stdin)!= NULL){
        string str = buf;
        str.pop_back();//去掉最后的换行
        stack<unsigned >indexStack;//存储左圆括号的下标
        string res;
        for(unsigned i = 0;i<str.size();i++){
            if(str[i] == '('){
                indexStack.push(i);
                res.push_back('$');
            }
            else if(str[i] == ')'){
                if(indexStack.empty()){
                    res.push_back('?');
                }
                else{
                    res.push_back(' ');
                    res[indexStack.top()] = ' ';
                    indexStack.pop();
                }
            }
            else{
                res.push_back(' ');
            }
        }
        printf("%s\n%s\n",str.c_str(),res.c_str());
    }
    return 0;
}
