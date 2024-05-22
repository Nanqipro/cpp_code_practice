#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
/*long long factorial(int n){
    if(n == 1){
        return 1;
    }
    else{
        return factorial(n-1)*n;
    }
}*/
void print(string pre,string str){
    if(str.size() == 1){
        printf("%s\n",(pre+str).c_str());
        return;
    }

    string nextpre;
    string nextstr;

    for(int i = 0;i<str.size();i++){
        nextpre = pre+str[i];
        nextstr = str;
        nextstr.erase(i,1);
        print(nextpre,nextstr);
    }



}
int main() {
    char input[7];
    scanf("%s",&input);
    string inp = input;
    print("",inp);
    printf("\n");

    return 0;
}
