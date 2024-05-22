#include <algorithm>
#include <cstdio>
using namespace std;
/*int main() {
    int n;
    int arr[101];
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);//默认是升序排序
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}*/
//降序排序
bool comp(int lhs,int rhs){
    //不发生交换的情况下返回真
    /*if (lhs > rhs){
        return true;
    }
    else{
        return false;
    }*/
    return lhs > rhs;
}
int main(){
    int arr[8];
    for (int i = 0; i < 8; ++i) {
        scanf("%d",arr+i);//&arr[i] 和 arr+i 等价
    }
    sort(arr,arr+8, comp);//comp后不加()
    for(int i = 0;i<8;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}