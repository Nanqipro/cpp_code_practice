#include <cstdio>
#include <string>
#include <map>

using namespace std;

struct students{
    string name;
    string sex;
    int age;
};

int main() {
    int n;
    scanf("%d",&n);
    map<string,students> infoMap;
    for(int i = 0;i<n;i++){
        char num[30];
        char name[30];
        char sex[20];
        int age;
        scanf("%s%s%s%d",num,name,sex,&age);
        string numstr = num;
        students student;
        student.name = name;
        student.sex = sex;
        student.age = age;
        infoMap[numstr] = student;
    }
    int m;
    scanf("%d",&m);
    for(int j = 0;j<m;j++){
        char num[30];
        scanf("%s",num);
        string numstr = num;
        if(infoMap.find(numstr) != infoMap.end()){
            printf("%s %s %s %d\n",numstr.c_str(),
                   infoMap[numstr].name.c_str(),
                   infoMap[numstr].sex.c_str(),
                   infoMap[numstr].age);
        }
        else{
            printf("No Answer!\n");
        }
    }
    return 0;
}
