#include <cstdio>
#include <string>
using namespace std;

int main() {
    char code[1000];
    string cod;
    while (fgets(code, sizeof(code),stdin)){
        cod = code;
        if(cod == "ENDOFINPUT\n"){
            break;
        }
        fgets(code,sizeof(code), stdin);
        cod = code;
        for(int i = 0;i<cod.size()-1;i++){
            if('A'<=cod[i]&&cod[i]<='Z'){
                cod[i] = (cod[i]-'A'-5+26)%26+'A';
            }
            else{
                continue;
            }
        }
        printf("%s",cod.c_str());
        fgets(code,sizeof(code),stdin);
    }
    return 0;
}
