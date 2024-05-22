#include <cstdio>
#include <iostream>
#include<string>
#include<cmath>
#include <map>
using namespace std;


long long int f(int n){
    long long int result = 2;
    for(int i = 0 ; i<n-1 ; i++){
        result *= 2;
    }
    return result;
}
/*
int main() {
    long long int skew;
    while (scanf("%d",&skew)!= EOF){
        int remain;
        long long int res = 0;
        int s = 1;
        while (true){
            remain = skew%10;
            res = res+remain*(f(s)-1);
            s++;
            skew = skew/10;
            if(0 == skew){
                break;
            }
        }
        printf("%d\n",res);
    }
    return 0;
}

*/


/*int reverse(int temp){
    int rev = 0;
    int remain;
    while(1){
        remain = temp%10;
        rev = rev*10+remain;
        temp = temp/10;
        if(0 == temp){
            break;
        }
    }
    return rev;
}*/


int main(){
    char skew[100];
    map<char,int> CharToInt = {
            {'1',1},{'2',2},{'3',3},{'4',4},{'5',5},{'6',6},{'7',7},{'8',8},{'9',9}
    };
    while (scanf("%s",skew)!=EOF){
        string str = skew;
        int len = str.length()+1;
        int res = 0;
        for(int i = 1;i<len;i++){
            res = res+CharToInt[str[i-1]]* (f(len-i)-1);
        }
        printf("%d\n",res);
    }
    return 0;
}