#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;

void power(int n){
    if(0 == n){
        printf("2(0)");
    }
    else if(1==n){
        printf("2");
    }
    else if(2 == n){
        printf("2(2)");
    }
    else{
        string res;
        while(n){
            res += n%2+'0';
            n /= 2;
        }//得到二进制的逆序表述
        int index;
        while((index = res.rfind("1"))!=string::npos){//从后往前查
            if(index>2){
                printf("2(");
                power(index);
                printf(")");
            }
            else{
                power(index);
            }
            res[index] = '0';
            if((index = res.rfind("1"))!=string::npos){
                printf("+");
            }
        }
    }
}
int main() {
    int n;
    scanf("%d",&n);
    if(0 == n){
        printf("0");
    }
    else if(1 == n){
        printf("2(0)");
    }
    else if(2 == n)
    {
        printf("2");
    }
    else{
        power(n);
    }

    return 0;
}
