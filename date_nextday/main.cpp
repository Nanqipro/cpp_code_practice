#include <cstdio>

int main() {
    int mday[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int year,n;
    while (scanf("%d%d",&year,&n)!= EOF){
        int mon = 1;
        int day = 1;
        for(int i = 0;i<n-1;i++){
            bool isleap = year%400 == 0 || year%100 != 0 && year%4 == 0;
            if(isleap){
                mday[2] = 29;
            } else{
                mday[2] = 28;
            }
            day ++;
            if(day >mday[mon]){
                mon++;
                day = 1;
                if(mon>12){
                    mon = 1;
                    year++;
                }
            }
        }
        printf("%04d-%02d-%02d\n",year,mon,day);
    }
    return 0;
}
