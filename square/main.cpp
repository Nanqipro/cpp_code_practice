#include <cstdio>

using namespace std;
int m;
int stick[30];
bool isUsed[30];

bool DFS(int curSide,int curLength,int position,int side){
    if(curSide == 3){
        return true;
    }
    for(int i = position;i<m;i++){
        if(isUsed[i] || curLength+stick[i] > side){
            continue;
        }
        isUsed[i] = true;
        if(curLength+stick[i] < side){
            if(DFS(curSide,curLength+stick[i],i+1,side)){
                return true;
            }
        }
        else if(curLength+stick[i] == side){
            if(DFS(curSide+1,0,0,side)){
                return true;
            }
        }
        isUsed[i] = false;
    }
    return false;
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        scanf("%d",&m);
        int total = 0;
        for(int j = 0;j<m;j++){
            scanf("%d\n",&stick[j]);
            total += stick[j];
            isUsed[j] = false;
        }
        int side;
        if(total%4 == 0){
            side = total/4;
            if(DFS(0,0,0,side)){
                printf("yes\n");
            }
            else{
                printf("no\n");
            }
        }
        else{
            printf("no\n");
        }
    }
    return 0;
}
