#include <cstdio>
#include <map>
using namespace std;

int main() {
    int n,m;
    while (scanf("%d%d",&n,&m)!=EOF){
        map<int,int> P_num;//<图书编号,人数>
        int p[n];//i号读者喜欢的图书编号p
        for(int i=0;i<n;i++){
            scanf("%d",&p[i]);
            if(P_num.find(p[i]) == P_num.end()){
                P_num[p[i]] = 0;
            }
            else{
                P_num[p[i]] ++;
            }
        }
        for(int i=0;i<n;i++){
            if(P_num[p[i]]>0){
                printf("%d\n",P_num[p[i]]);
            }
            else{
                printf("BeiJu\n");
            }
        }
    }
    return 0;
}
