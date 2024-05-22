#include <string>
#include <map>
#include <cstdio>
using namespace std;


int main() {
    map<string,string> dict;
    while(true){
        char line[200];
        fgets(line,200,stdin);
        string linestr = line;
        linestr.pop_back();
        if("@END@" == linestr){
            break;
        }
        string word = linestr.substr(0,linestr.find(']')+1);
        string info = linestr.substr(linestr.find(']')+2);
        dict[word] = info;
        dict[info] = word;
    }
    int n;
    scanf("%d",&n);
    getchar();
    for(int i = 0;i<n;i++){
        char line[200];
        fgets(line,200,stdin);
        string linestr = line;
        linestr.pop_back();
        if(dict.find(linestr) != dict.end()){
            if(linestr[0] != '['){
                printf("%s\n",dict[linestr].substr(1,dict[linestr].size()-2).c_str());
            }
            else{
                printf("%s\n",dict[linestr].c_str());
            }
        }
        else{
            printf("what?\n");
        }
    }
    return 0;
}
