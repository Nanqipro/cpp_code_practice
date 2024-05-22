#include <algorithm>
#include <cstdio>
using namespace std;
struct Student{
    char name[50];
    int grade;
    int seq;//记录录入的顺序
};
bool comp1(Student lhs,Student rhs){
    if(lhs.grade<rhs.grade){
        return true;
    }
    else if(lhs.grade == rhs.grade&&lhs.seq<rhs.seq){
        return true;
    }
    else{
        return false;
    }
}
bool comp0(Student lhs,Student rhs){
    if(lhs.grade>rhs.grade){
        return true;
    }
    else if(lhs.grade == rhs.grade&&lhs.seq<rhs.seq){
        return true;
    }
    else{
        return false;
    }
}
int main() {
    int N;
    int order;
    Student arr[1000];
    while(scanf("%d%d",&N,&order)!= EOF){
        int seq = 0;
        for(int i = 0;i<N;i++){
            scanf("%s%d",&arr[i].name,&arr[i].grade);
            arr[i].seq = seq;
            seq ++;
        }
        if(0 == order){
            sort(arr,arr+N, comp0);
        }
        else{
            sort(arr,arr+N, comp1);
        }
        for(int i = 0;i<N;i++){
            printf("%s %d\n",arr[i].name,arr[i].grade);
        }
    }

    return 0;
}
