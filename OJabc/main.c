#include <stdio.h>

int main() {
    int a,b,c;
    int abc,bcc;
    for(a = 0;a<10;a++){
        for(b = 0;b<10;b++){
            for(c = 0;c<10;c++){
                abc = a*100+b*10+c*1;
                bcc = b*100+c*10+c*1;
                if(abc+bcc == 532){
                    printf("%d %d %d\n", a , b , c);
                }
            }
        }
    }

    return 0;
}
