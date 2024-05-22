#include <iostream>
#include <cstdio>
int tree(int m,int n){
    if(m>n){
        return 0;
    }
    else{
        return 1+ tree(2*m,n)+ tree(2*m+1,n);
    }
}
int main() {
    int n,m;
    while (scanf("%d%d",&m,&n)!=EOF){
        if(m == 0){
            break;
        }
        printf("%d\n", tree(m,n));
    }
    return 0;
}
