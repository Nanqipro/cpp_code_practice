#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

int main() {
    int n;
    priority_queue<int> pqueue;
    while(scanf("%d",&n)!=EOF){
        if(0 == n){
            break;
        }
        else{
            for(int i = 0;i<n;i++){
                int leaf;
                scanf("%d",&leaf);
                pqueue.push(-leaf);
            }
            int res = 0;
            while(pqueue.size()>1){
                int leaf1 = pqueue.top();
                pqueue.pop();
                int leaf2 = pqueue.top();
                pqueue.pop();
                res = res + leaf1 +leaf2;
                pqueue.push(leaf1+leaf2);
            }
            printf("%d\n",-res);
        }
    }
    return 0;
}
