#include <string>
#include <cstdio>
#include <map>
using namespace std;//一般都加上这句话
int main() {
    int mday[13] = {-1,31,28,31,30,31,30,31,31,30,31,30,31};
    string intToWeekday[7] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    map<string,int> monthToInt = {{"January",1},
                                  {"February",2},
                                  {"March",3},
                                  {"April",4},
                                  {"May",5},
                                  {"June",6},
                                  {"July",7},
                                  {"August",8},
                                  {"September",9},
                                  {"October",10},
                                  {"November",11},
                                  {"December",12}};
    int year,mon,day;
    char str[100];
    string month;
    bool isBefore;
    while (scanf("%d%s%d",&day,str,&year)!=EOF){
        month = str;//把字符串从C风格转换成C++风格
        /*if(month == "january"){
            mon = 1;
//            printf("mon = %d,month = %s\n",mon,month.c_str());//printf也要使用C风格的字符串
        }*/
        mon = monthToInt[month];
        if(year<2022 || 2022 == year&&mon<11 || 2022==year&&11 == mon&&day<3){
            isBefore = true;
        } else{
            isBefore = false;
        }
        int begYear,begMon,begDay,endYear,endMon,endDay;
        if(isBefore){
            begYear = year;
            begMon = mon;
            begDay = day;
            endDay = 3;
            endMon = 11;
            endYear = 2022;
        } else{
            begYear = 2022;
            begMon = 11;
            begDay = 3;
            endDay = day;
            endMon = mon;
            endYear = year;
        }
        int totalDay = 0;
        while (true){
            if(begYear == endYear&&begMon == endMon&&begDay == endDay){
                break;
            }
            totalDay++;
            //nextDay
            bool isleap = begYear%400 == 0 || begYear%4 == 0 && begYear%100 != 0;
            if(isleap){
                mday[2] = 29;
            }
            else{
                mday[2] = 28;
            }
            begDay++;
            if(begDay>mday[begMon]){
                begDay = 1;
                begMon++;
                if(begMon >12){
                    begMon = 1;
                    begYear ++;
                }
            }
        }
        if(isBefore){
            printf("%s\n",intToWeekday[(11 - totalDay%7)%7].c_str());
            //(x+totalDay)%7 = 4 --> x = (11 - totalDay%7)%7
        }
        else{
            printf("%s\n",intToWeekday[(totalDay+4)%7].c_str());
        }
    }
    return 0;
}
