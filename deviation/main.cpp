#include <cstdio>


int main() {
    int beg,end;
    int mday[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    while (scanf("%d%d",&beg,&end)!= EOF){
        int year1,mon1,day1;
        day1 = beg%100;
        mon1 = (beg/100)%100;
        year1 = beg/10000;
        int year2,mon2,day2;
        day2 = end%100;
        mon2 = (end/100)%100;
        year2 = end/10000;
        int num_day = 1;
        while(true){
            bool isleap = year1%400 == 0 || year1%100 != 0 && year1%4 == 0;
            if(isleap){
                mday[2] = 29;
            } else{
                mday[2] = 28;
            }
            day1 ++;
            if(day1 >mday[mon1]){
                mon1++;
                day1 = 1;
                if(mon1>12){
                    mon1 = 1;
                    year1++;
                }
            }
            num_day++;
            if(year1 == year2&&mon1 == mon2&&day1 == day2){
                break;
            }
        }
        printf("%d\n",num_day);
    }



    return 0;
}
