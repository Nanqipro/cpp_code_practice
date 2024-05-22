#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;

int main() {
    int n;
    stack<int> test;
    while(scanf("%d",&n)!=EOF){
        char inp;
        for(int i = 0;i<n;i++){
            scanf("%c",&inp);
            if(inp == 'P'){
                int num;
                scanf("%d",&num);
                test.push(num);
            }
            else if(inp == 'O'){
                if(test.empty()){
                    continue;
                }
                else{
                    test.pop();
                }
            }
            else if(inp == 'A'){
                if(test.empty()){
                    printf("E\n");
                }else{
                    printf("%d\n",test.top());
                }
            }
            else{
                continue;
            }
        }
    }


    return 0;
}
