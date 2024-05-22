#include <cstdio>
#include <queue>

using namespace std;

struct Info{
    int pos;
    int time;
};

int main() {
    int n,k;
    scanf("%d%d",&n,&k);
    queue<Info> posQueue;
    bool isVisit[100001];
    for(int i=0;i<100001;i++){
        isVisit[i]= false;
    }
    //起始点加入
    Info first;
    first.pos = n;
    first.time = 0;
    posQueue.push(first);
    while(!posQueue.empty()){
        Info cur = posQueue.front();
        posQueue.pop();
        if(k == cur.pos){
            printf("%d\n",cur.time);
            break;
        }
        isVisit[cur.pos] = true;
        Info neighbour;
        if(cur.pos-1 >= 0&&cur.pos-1 <= 100000&& !isVisit[cur.pos-1]){
            neighbour.pos = cur.pos-1;
            neighbour.time = cur.time+1;
            posQueue.push(neighbour);
        }
        if(cur.pos+1 >= 0&&cur.pos+1 <= 100000&& !isVisit[cur.pos+1]){
            neighbour.pos = cur.pos+1;
            neighbour.time = cur.time+1;
            posQueue.push(neighbour);
        }
        if(cur.pos*2 >= 0&&cur.pos*2 <= 100000&& !isVisit[cur.pos*2]){
            neighbour.pos = cur.pos*2;
            neighbour.time = cur.time+1;
            posQueue.push(neighbour);
        }
    }
    return 0;
}
