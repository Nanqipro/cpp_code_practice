#include <cstdio>
#include <queue>

using namespace std;

int main() {
    priority_queue<int> pqueue;//存入相反数
    int n;
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        int leaf;
        scanf("%d",&leaf);
        pqueue.push(-leaf);
    }
    int res = 0;//存储带权路径和的中间结果
    while(pqueue.size()>1){
        int leaf1 = pqueue.top();
        pqueue.pop();
        int leaf2 = pqueue.top();
        pqueue.pop();
        //计算带权路径和
        res = res+leaf1+leaf2;
        //把构成的新子树插入回原集合K中
        pqueue.push(leaf1+leaf2);
    }
    printf("%d\n",-res);
    return 0;
}
