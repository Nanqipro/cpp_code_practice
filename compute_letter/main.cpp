#include <iostream>
#include <cstdio>
#include <string>
#include <map>

using namespace std;

int main() {
    char input[1000];
    string inp;
    map<char,int> LetterToNumb = {{'A',0},{'B',1},{'C',2},{'D',3},{'E',4},{'F',5},
                                  {'G',6},{'H',7},{'I',8},{'J',9},{'K',10},{'L',11},
                                  {'M',12},{'N',13},{'O',14},{'P',15},{'Q',16},{'R',17},
                                  {'S',18},{'T',19},{'U',20},{'V',21},{'W',22},
                                  {'X',23},{'Y',24},{'Z',25}};
    while(fgets(input,sizeof(input),stdin)){
        inp = input;
        int letter[26] = {0};

        for(int i = 0;i<inp.size()-1;i++){
            if(inp[i]>='A'&&inp[i]<='Z'){
                letter[LetterToNumb[inp[i]]] ++;
            }
        }
        char c = 'A';
        for(int j = 0;j<26;j++){

            printf("%c:%d\n",c,letter[j]);
            c++;
        }

    }
    return 0;
}
