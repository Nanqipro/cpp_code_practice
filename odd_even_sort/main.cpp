#include <algorithm>
#include <cstdio>
using namespace std;
bool comp(int lhs,int rhs){
    if(lhs%2 == 1&&rhs%2 == 0){
        return true;
    }
    else if(lhs%2 == 1 && rhs%2 == 1 && lhs > rhs){
        return true;
    }
    else if(lhs%2 == 0 && rhs%2 == 0 && lhs < rhs){
        return true;
    } else{
        return false;
    }
}
int main() {
    int arr[10];
    while (scanf("%d%d%d%d%d%d%d%d%d%d"
                 ,arr,arr+1,arr+2,arr+3,arr+4,arr+5,arr+6,arr+7,arr+8,arr+9)!=EOF){
        sort(arr,arr+10, comp);
        for(int i=0;i<10;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
    return 0;
}
