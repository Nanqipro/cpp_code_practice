#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int N;
    while (scanf("%d",&N)!= EOF){
        int arr[N];
        for(int i = 0;i<N;i++){
            scanf("%d",&arr[i]);
        }
        sort(arr,arr+N);
        printf("%d\n",arr[N-1]);
        if(0 == N-1){
            printf("%d",-1);
        }else{
            for(int i = 0;i<N-1;i++){
                printf("%d ",arr[i]);
            }
        }
    }
    return 0;
}
