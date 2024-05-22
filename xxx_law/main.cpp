#include <cstdio>


int main() {
    int n;
    while(scanf("%d",&n)!=EOF){
        int sum = 0;
        while(n != 1){
            if(n%2 == 0){
                n /=2;
            } else{
                n = 3*n+1;
                n /=2;
            }
            sum++;
        }
        printf("%d\n",sum);

    }
    return 0;
}
