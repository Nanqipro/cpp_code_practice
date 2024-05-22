#include <cstdio>
#include <string>
using namespace std;
int main() {
    char code[100];
    while(scanf("%s",code)!=EOF){
        string cod = code;
        for(int i = 0;i<cod.length();i++){
            if((cod[i]>='a'&&cod[i]<='y')||(cod[i]>='A'&&cod[i]<='Y')){
                cod[i] += 1;
            }
            else if(cod[i] == 'z'||cod[i] == 'Z'){
                cod[i] -= 25;
            }
            else{
                continue;
            }
        }
        printf("%s ",cod.c_str());
    }
    printf("\n");
    return 0;
}
