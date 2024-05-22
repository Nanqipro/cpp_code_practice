#include <cstdio>
#include <algorithm>
using namespace std;
struct Student{
    int num;
    int grade;
};
bool comp(Student lhs,Student rhs){
    if(lhs.grade < rhs.grade){
        return true;
    }
    else if(lhs.grade == rhs.grade && lhs.num < rhs.num){
        return true;
    }
    else{
        return false;
    }
}
int main() {
    Student arr[100];
    int n;
    scanf("%d",&n);
    for(int i= 0;i<n;i++){
        scanf("%d%d",&arr[i].num,&arr[i].grade);
    }
    sort(arr,arr+n,comp);
    for(int i = 0;i<n;i++){
        printf("%d %d\n",arr[i].num,arr[i].grade);
    }
    return 0;
}
