#include <cstdio>


int main() {
    int n;
    int arr[200];
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    int idx;
    for(idx = 0;idx<n;idx++){
        if(x == arr[idx]){
            printf("%d\n",idx);
            break;
        }
    }
    if(idx == n){
        printf("%d\n",-1);
    }
    return 0;
}
