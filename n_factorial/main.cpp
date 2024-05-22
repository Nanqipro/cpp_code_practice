#include <iostream>
#include <cstdio>
//using namespace std;
long long factorial(int n){
    if(n == 1){
        return 1;
    }
    else{
        return factorial(n-1)*n;
    }
}

int main() {
    int n;
    scanf("%d",&n);
    printf("%lld\n", factorial(n));
    return 0;
}
