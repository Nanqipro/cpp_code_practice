#include <cstdio>
#include <string>
#include <map>
using namespace std;


int main() {
    char numb1[20];
    char numb2[20];
    map<char,int> CharToInt = {
            {'1',1},{'2',2},{'3',3},{'4',4},{'5',5},{'6',6},{'7',7},{'8',8},{'9',9}
    };
    while (scanf("%s%s",numb1,numb2)!=EOF){
        string num1 = numb1;
        string num2 = numb2;
        int len1 = num1.length();
        int len2 = num2.length();
        int sum = 0;
        for(int j = 0;j<len2;j++){
            sum = sum+CharToInt[num2[j]];
        }
        int res = 0;
        for(int i = 0;i<len1;i++){
            res = res+CharToInt[num1[i]]*sum;
        }
        printf("%d\n",res);
    }
    return 0;
}
