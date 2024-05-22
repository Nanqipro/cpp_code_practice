#include <cstdio>
#include <string>
using namespace std;


int direction[8][2] = {//按照字母顺序来排列
        {-1,-2},{1,-2},{-2,-1},{2,-1},{-2,1},{2,1},{-1,2},{1,2}
};//每一步都有八种走法
bool isVisit[50][50];
bool DFS(int x,int y,int cur,int p,int q,string path){
    //把本节点加入路径中
    path += (y+'A');
    path += (x+'1');
    //将本节点设置为已经访问过了
    isVisit[x][y] = true;
    //判断是否达到终点
    if(cur == p*q){
        printf("%s\n\n",path.c_str());
        return true;
    }
    //遍历邻居
    for(int i = 0;i<8;i++){
        if(x+direction[i][0]>=0&&x+direction[i][0]<p
        &&y+direction[i][1] >=0&&y+direction[i][1]<q
        &&!isVisit[x+direction[i][0]][y+direction[i][1]]){
            if(DFS(x+direction[i][0],y+direction[i][1],cur+1,p,q,path)){
                return true;
            }
        }
    }
    //不存在从本节点出发到达终点的路径
    isVisit[x][y] = false;
    path.substr(0,path.size()-2);//把最后两个字符裁掉
    return false;
}


int main() {
    int n,p,q;
    scanf("%d",&n);
    for(int idx = 0;idx<n;idx++){
        scanf("%d%d",&p,&q);
        printf("Scenario #%d:\n",idx+1);
        //每一轮都把isVisit置为false
        for(int i = 0;i<p;i++){
            for(int j = 0;j<q;j++){
                isVisit[i][j] = false;
            }
        }
        string path;
        if(!DFS(0,0,1,p,q,path)){
            printf("impossible\n\n");
        }
    }
    return 0;
}
