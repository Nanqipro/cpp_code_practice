#include <stdio.h>

/*
int main() {
    int temp;
    int reverse;
    for(int a = 1;a<10;a++){
        for(int b = 0;b<10;b++){
            for(int c = 0;c<10;c++){
                for(int d = 0;d<10;d++){
                    temp = a*1000+b*100+c*10+d;
                    reverse = d*1000+c*100+b*10+a;
                    if(9*temp == reverse){
                        printf("%d\n",temp);
                    }
                }

            }
        }
    }
    return 0;
}
*/
int reverse(int temp){
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
}

int main(){
    for(int i =1000;i<=9999;i++){
        if(9*i == reverse(i)){
            printf("%d\n", i);
        }
    }
    return 0;

}