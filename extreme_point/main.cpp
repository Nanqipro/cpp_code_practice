#include <cstdio>
#include <algorithm>
using namespace std;


int main() {
    int n;
    while (scanf("%d",&n)!=EOF){
        int arr[n];
        for(int i = 0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(int j = 0;j<n;j++){
            if((arr[j]>arr[j-1]&&arr[j]>arr[j+1]||arr[j]<arr[j-1]&&arr[j]<arr[j+1])&&(j>0||j<n-1)){
                printf("%d ",j);
            }
            else if(0 == j && arr[j] != arr[j+1]){
                printf("%d ",j);
            }
            else if(n-1 == j && arr[j] != arr[j-1]){
                printf("%d ",j);
            }
            else{
                continue;
            }
        }
        printf("\n");
    }
    return 0;
}
