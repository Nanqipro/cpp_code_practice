#include <stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int sum = 0;
        for(int i = 1;i<=n;i++){
            int a,b;
            a = i%10;
            b = i/10;
            if(0 == i%7 || 7 == a || 7 == b){
                continue;
            }
            else{
                sum += i*i;
            }
        }
        printf("%d\n",sum);

    }
    return 0;
}