/*
#include <cstdio>
#include <string>
#include <vector>
using namespace std;
//将字符串分割形成单词数组
vector<string> split(string &s)
{
    int i = 0, j = 0;
    vector<string> a;
    while (i < s.size())
    {
        while (s[j]!=' '&&s[j]!='\n'&&s[j]!='\r'&&s[j]!='\t' && j < s.size())
            ++j;
        a.push_back(s.substr(i, j - i));
        while (s[j]==' '||s[j]=='\n'||s[j]=='\r'||s[j]=='\t')
            ++j;
        i = j;
    }
    return a;
}
int main() {
    char input[110];
    string inp;
    while(fgets(input,110,stdin)){
        inp = input;
        vector<string> str =  split(inp);
        for(unsigned int i = 0;i<str.size();i++){
            if(str[i][0] >='a'&&str[i][0]<='z'){
                str[i][0] -= 32;
            }
        }
        for(int i = 0;i<str.size();i++){
            printf("%s ",str[i].c_str());
        }

    }
    return 0;
}
*/
#include <cstdio>
#include <string>
using namespace std;
int main(){
    char input[110];
    string inp;
    while (fgets(input,110,stdin)){
        inp = input;
        inp = ' '+inp;
        for(int i = 0;i<inp.size();i++){
            if((inp[i] == ' '||inp[i] == '\n'||inp[i] == '\r'||inp[i] == '\t')&&
            (inp[i+1]>='a'&&inp[i+1]<='z')){
                inp[i+1] -=32;
            }
            else{
                continue;
            }
        }
        inp.erase(0,1);
        printf("%s\n",inp.c_str());
    }
    return 0;
}
