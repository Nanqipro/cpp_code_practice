#include <cstdio>

int main() {
    int m;
    int mday[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d",&m);
    for(int i = 0;i<m;i++){
        int year,mon,day;
        scanf("%d%d%d",&year,&mon,&day);
        day ++;
        if(day >mday[mon]){
            mon++;
            day = 1;
            if(mon>12){
                mon = 1;
                year++;
            }
        }
        printf("%04d-%02d-%02d\n",year,mon,day);
    }

    return 0;
}
