#include <cstdio>
#include <algorithm>
//#include <map>
//#include <string>
using namespace std;
struct Mouse{
    int weight;
    char color[11];
};
bool comp(Mouse lhs,Mouse rhs){
    if(lhs.weight>rhs.weight){
        return true;
    }
    else{
        return false;
    }

}

int main() {
    int N;
    while (scanf("%d",&N)!=EOF){
        Mouse arr[N];
        for(int i = 0;i<N;i++){
            scanf("%d%s",&arr[i].weight,&arr[i].color);
        }
        sort(arr,arr+N, comp);
        for(int i = 0;i<N;i++){
            printf("%s\n",arr[i].color);
        }
    }


    /*int N;
    char color[11];
    int weight[N];
    string col[N];
    map<string,int> colTocol = {{"bule",1},{"red",2},{"green",3}};
    scanf("%d",&N);
    for(int i = 0;i<N;i++){
        scanf("%d%s",&weight[i],&color);
        col[i] = color;
    }*/
    return 0;
}
