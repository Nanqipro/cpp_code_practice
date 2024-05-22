#include <cstdio>

int main() {
    int year,mon,day;
    int mday[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int totalDay[13] = {0};
    for(int mon = 2;mon<=12;mon++){
        totalDay[mon] = totalDay[mon-1]+mday[mon-1];
        //到mon月1日的天数 = 到mon-1月1日的天数+第mon-1月的天数
    }
    while (scanf("%d%d%d",&year,&mon,&day)!=EOF){
        bool isleap = year%400 == 0 || year%100 != 0 && year%4 == 0;
        if(isleap == true&&mon >= 3){
            printf("%d\n",totalDay[mon]+day+1);
        }
        else{
            printf("%d\n",totalDay[mon]+day);
        }
    }
    return 0;
}
