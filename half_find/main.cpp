#include <cstdio>
#include <algorithm>
#include <map>
using namespace std;
/*
//用二分查找来解决问题
 int arr[100];
bool binarySearch(int n,int x){
    int left = 0;
    int right = n-1;
    while(left <= right){
        int mid = (left+right)/2;
        if(arr[mid] == x){
            return true;
        }
        else if(arr[mid]>x){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
    return false;
}
int main() {
    int n,m;
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    scanf("%d",&m);
    for(int i = 0;i < m;i++){
        int x;
        scanf("%d",&x);
        if(binarySearch(n,x)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
*/
//用map 来解决问题
int main(){
    map<int ,int>findIndex;
    int m,n;
    int arr[101];
    while(scanf("%d",&n)!=EOF){
        for(int i = 0;i<n;i++){
            scanf("%d",&arr[i]);
            findIndex[arr[i]] = i;
        }
        scanf("%d",&m);
        for(int i = 0;i<m;i++){
            int findNum;
            scanf("%d",&findNum);
            if(findIndex.find(findNum) == findIndex.end()){
                printf("NO\n");
            } else{
                printf("YES\n");
            }
        }
    }
    return 0;
}