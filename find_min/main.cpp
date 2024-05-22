#include <cstdio>

struct group{
    int a;
    int b;
};
int main() {
    int n;
    while (scanf("%d",&n)!=EOF){
        group arr[n];
        for(int i = 0;i<n;i++){
            scanf("%d%d",&arr[i].a,&arr[i].b);
        }
        group find_min = arr[0];
        for(int i = 0;i<n;i++){
            if(find_min.a>arr[i].a){
                find_min = arr[i];
            }
            else if(find_min.a == arr[i].a && find_min.b>arr[i].b){
                find_min = arr[i];
            }
            else{
                continue;
            }
        }
        printf("%d %d\n",find_min.a,find_min.b);
    }

    return 0;
}
