#include <cstdio>
#include <map>
using namespace std;

int main() {
    map<char,int> inputTime = {
            {'a',1}, {'b',2}, {'c',3},
            {'d',1}, {'e',2}, {'f',3},
            {'g',1},{'h',2}, {'i',3},
            {'j',1},{'k',2}, {'l',3},
            {'m',1},{'n',2}, {'o',3},
            {'p',1},{'q',2}, {'r',3}, {'s',4},
            {'t',1}, {'u',2}, {'v',3},
            {'w',1}, {'x',2}, {'y',3},{'z',4}

    };
    map<char,int> keyMap = {
            {'a',2}, {'b',2}, {'c',2},
            {'d',3}, {'e',3}, {'f',3},
            {'g',4},{'h',4}, {'i',4},
            {'j',5},{'k',5}, {'l',5},
            {'m',6},{'n',6}, {'o',6},
            {'p',7},{'q',7}, {'r',7}, {'s',7},
            {'t',8}, {'u',8}, {'v',8},
            {'w',9}, {'x',9}, {'y',9},{'z',9}
    };
    char str[101];
    while (scanf("%s",str)!=EOF){
        int lastInput = 1;//初始的时候，lastInput置为和其他所有键都不同的键
        int totalTime = 0;
        for(int i = 0;str[i]!='\0';i++){
            if(lastInput == keyMap[str[i]]){
                totalTime += 2;
            }
            totalTime = totalTime+ inputTime[str[i]];
            lastInput = keyMap[str[i]];
        }
        printf("%d\n",totalTime);
    }


    return 0;
}
