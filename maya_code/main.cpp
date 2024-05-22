#include <cstdio>
#include <string>
#include <map>
#include <queue>
using namespace std;

struct Info{
    int step;
    string code;
};
//利用广度优先遍历
int main() {
    int n;
    while(scanf("%d",&n)!=EOF){
        char code[20];
        map<string,bool> isVisit;
        scanf("%s",code);
        string codestr = code;
        queue<Info> codeQueue;
        Info first;
        first.code = codestr;
        first.step = 0;
        codeQueue.push(first);
        while(!codeQueue.empty()){
            Info curCode = codeQueue.front();
            isVisit[curCode.code] = true;
            if(curCode.code.find("2012")!= string::npos){
                printf("%d\n",curCode.step);
                break;
            }
            else{
                Info change;
                for(int i = 0;i<n-1;i++){
                    change = curCode;
                    swap(change.code[i],change.code[i+1]);
                    if(!isVisit[change.code]){
                        change.step++;
                        codeQueue.push(change);
                    }
                }
            }
            codeQueue.pop();
        }
        if(codeQueue.empty()){
            printf("-1\n");
        }
    }
    return 0;
}
