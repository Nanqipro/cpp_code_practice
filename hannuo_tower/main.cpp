#include <cstdio>
long long hanoi(int n){
    if(1 == n){
        return 2;
    }
    else{
        return 3*hanoi(n-1) +2;
    }
}
int main() {
    int n;
    while (scanf("%d",&n)!=EOF){
        printf("%lld\n", hanoi(n));
    }
    return 0;
}
