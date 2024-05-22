#include <iostream>
#include<cstdio>
#include <queue>
using namespace std;


int main() {
    int n,p,m;
    while(true){
        scanf("%d%d%d",&n,&p,&m);
        if(n == 0 && p == 0 && m == 0){
            break;
        }
        queue<int> children;
        for(int i = p,j = 0;j<n;j++){
            children.push(i);
            i++;
            if(i>n){
                i=1;
            }
        }
        int num=1;
        while(true){
            int cur = children.front();
            children.pop();
            if(num == m){
                num = 1;
                if(children.empty()){
                    printf("%d\n",cur);
                    break;
                }
                else{
                    printf("%d,",cur);
                }
            }
            else{
                num +=1;
                children.push(cur);
            }

        }
    }
    return 0;
}
