#include <iostream>
#include <stdio.h>
int Reverse(int n){
    int remain;
    int reverse = 0;
    while(true){
        remain = n%10;
        reverse = reverse*10+remain;
        n = n/10;
        if(0 == n){
            break;
        }
    }
    return reverse;
}
int main() {
    for(int i = 0;i<=256;i++){
        if(i*i == Reverse(i*i)){
            printf("%d\n",i);
        }
    }
    return 0;
}
