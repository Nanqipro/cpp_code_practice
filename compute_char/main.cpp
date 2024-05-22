#include <string>
#include <cstdio>
using namespace std;


int main() {
    char fin[10];
    string str_index;
    while (fgets(fin,sizeof(fin),stdin)){
        str_index = fin;
        if("#\n" == str_index){
            break;
        }
        char st[100];
        string str;
        fgets(st,sizeof(st),stdin);
        str = st;

        for(int i = 0;i<str_index.size()-1;i++){
            int sum = 0;
            for(int j = 0;j<str.size()-1;j++){
                if(str_index[i] == str[j]){
                    sum ++;
                }
            }
            printf("%c %d\n",str_index[i],sum);
        }
    }
    return 0;
}
