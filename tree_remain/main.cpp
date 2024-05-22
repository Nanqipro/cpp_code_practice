#include <cstdio>

int main() {
    int tree[10001];
    int L,M;
    while(scanf("%d%d",&L,&M)!= EOF){
        for(int i = 0;i<= L;i++){
            tree[i] = 1;
        }
        for(int idx = 0;idx <M;idx++){
            int left,right;
            scanf("%d%d",&left,&right);
            for(int i = left;i<=right;i++){
                tree[i] = 0;
            }
        }
        int total = 0;
        for(int i = 0;i<=L;i++){
            if(1 == tree[i]){
                total ++;
            }
        }
        printf("%d\n",total);
    }


    return 0;
}
