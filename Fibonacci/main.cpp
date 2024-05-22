#include <iostream>
#include <cstdio>
int fibonacci(int n){
    if(1 == n){
        return 1;
    }
    else if(0 == n){
        return 0;
    }
    else{
        return fibonacci(n-1)+ fibonacci(n-2);
    }
}
int main() {
    int n;
    while(scanf("%d",&n)!=EOF){
        printf("%d\n", fibonacci(n));
    }
    return 0;
}
