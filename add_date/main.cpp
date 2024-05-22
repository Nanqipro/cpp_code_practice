#include <cstdio>


int main() {
    int n;
    int mDay[13] = {-1,31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d",&n);
    int year,mon,day,num;
    for(int i = 0;i<n;i++){
        scanf("%d%d%d%d",&year,&mon,&day,&num);
        for(int j = 0;j<num;j++){
            bool isleap = year%400 == 0 || year%4 == 0 && year%100 != 0;
            if(isleap){
                mDay[2] = 29;
            }
            else{
                mDay[2] = 28;
            }
            day++;
            if(day >mDay[mon]){
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
