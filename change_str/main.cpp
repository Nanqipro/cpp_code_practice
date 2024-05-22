#include <cstdio>
#include <string>
using namespace std;

int main() {
    char input[110];
    string str;
    while (fgets(input,110,stdin)){
        str = input;
        char input2[110];
        char input3[110];
        string str2,str3;
        fgets(input2,110,stdin);
        fgets(input3,110,stdin);
        str2 = input2;
        str3 = input3;

        str.erase(str.size()-1);
        str2.erase(str2.size()-1);
        str3.erase(str3.size()-1);

        str = ' '+str+' ';
        str2 = ' '+ str2 + ' ';
        str3 = ' '+ str3 + ' ';
        while(true){
            int pos = str.find(str2);
            if(pos!=string::npos){
                str.erase(pos,str2.size());
                str.insert(pos,str3);
            }
            else
            {
                break;
            }
        }
        str.erase(0,1);
        printf("%s\n",str.c_str());
    }
    return 0;
}
