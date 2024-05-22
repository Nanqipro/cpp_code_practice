#include <cstdio>
#include <map>
#include <string>
using namespace std;
struct Time{
    string InTime;
    string OutTime;
};
int main() {
    int n;
    while(scanf("%d",&n)!= EOF){
        map<string,Time> record;
        Time idx_InAndOut;
        idx_InAndOut.InTime = "23:59:59";
        idx_InAndOut.OutTime = "00:00:00";
        string Idx_early;
        string Idx_later;
        for(int i=0;i<n;i++){
            Time time;
            char id[100];
            char inTime[100];
            char outTime[100];
            scanf("%s%s%s",id,inTime,outTime);
            string idx = id;
            time.InTime = inTime;
            time.OutTime = outTime;
            record[idx] = time;
            if(record[idx].InTime<idx_InAndOut.InTime){
                idx_InAndOut.InTime = record[idx].InTime;
                Idx_early = idx;
            }
            if(record[idx].OutTime>idx_InAndOut.OutTime){
                idx_InAndOut.OutTime = record[idx].OutTime;
                Idx_later = idx;
            }
        }
        printf("%s %s\n",Idx_early.c_str(),Idx_later.c_str());
    }
    return 0;
}
